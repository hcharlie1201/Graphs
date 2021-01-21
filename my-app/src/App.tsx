import React, {Fragment} from 'react';
import Navbar from './components/layout/Navbar';
import { useForm, SubmitHandler } from "react-hook-form";
import { triggerAsyncId } from 'async_hooks';

interface Node {
  name: string;
  income: number;
  age: number;
}

function App() {
  const {register, handleSubmit, errors} = useForm<Node>();
  const onSubmit: SubmitHandler<Node> = data => console.log(data);
   
  return (
    <Fragment>
    <div className="App">
       <Navbar title="Graphs"/>
    </div>
    <form onSubmit = {handleSubmit(onSubmit)}>
      <div>
        <label htmlFor="name">Name</label>
        <input ref={register({required: true })} type="text" name="name"/>
        {
          errors.name && <p>Name is required</p> 
        }
      </div>
      <div>
        <label htmlFor="income">Income (999 max and -999 min)</label>
        <input ref={register({required: true, min: -999, max: 999})} type="text" name="income"/>
        {
          errors.income?.type === "required" && <p>Your income is required</p>
        }
        {
         errors.income?.type === "min" && <p>Needs to be at least -999</p> 
        }
        {
          errors.income?.type === "max" && <p>Needs to be at most 999</p>
        }
      </div>
      <div>
        <label htmlFor="age">Age</label>
        <input ref={register({required: true, min: -999, max: 999})} type="text" name="age"/>
        {

        }
      </div>
      <div>
        <input type="submit" value="Submit"/>
      </div>
    </form>
  </Fragment>
  );
}

export default App;
