interface User {
  username: string,
  age: number
}

function user(register: User) {
  console.log(register.username, register.age)
}
  

const newUser = { username: "totolkat", age: 14 } 
console.log(newUser)
