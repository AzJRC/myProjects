let colorIndex = 0;

function changeColor() {
    colorIndex++;
    const colorArray = ['green','blue','red','yellow','white','gray','black','purple']
    document.getElementsByTagName('body')[0].style.background = colorArray[colorIndex]
    if (colorIndex > colorArray.length - 1) {
        colorIndex = 0
    };
};

function changeColorByText() {
    document.getElementsByTagName('body')[0].style.background = document.getElementById('inputColor').value
}