const quoteElem = document.getElementById('quote')
const authorElem = document.getElementById('author');

const generateNewQuote = () => {

  fetch('https://api.quotable.io/random')
  .then(response => response.json())
  .then(data => {
    quoteElem.innerHTML = "'"+data.content+"'";
    authorElem.innerHTML = "— "+data.author;
   
    document.getElementById("loading").style.display = "none";
  });   
}
generateNewQuote();  
