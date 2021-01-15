import React from 'react'

function Navbar(props) {
    return (
        <nav className="bg-blue-800">
            <h1>{props.title}</h1>
        </nav>
    )
}

export default Navbar
