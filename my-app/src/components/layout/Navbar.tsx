import React from 'react'

interface NavProps {
    title : string;
}
function Navbar(prop: NavProps) {
    return (
        <nav className="bg-blue-800">
            <h1>{prop.title}</h1>
        </nav>
    )
}

export default Navbar
