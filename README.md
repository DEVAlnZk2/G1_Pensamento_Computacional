# ATIVIDADE GRUPO 2 - G1
Feito por: Alan Campanhol e Silva

## Contexto
Você foi contratado para desenvolver a lógica de um sistema de sinalização inteligente para uma máquina industrial que opera em diferentes modos de funcionamento.
O operador pode selecionar o modo de operação por meio de três botões, sendo que cada modo deve ser representado por uma cor específica em um LED RGB. Além disso, o sistema possui um potenciômetro que será utilizado para ajustar a intensidade luminosa do LED, permitindo melhor visualização em diferentes condições de iluminação do ambiente.
Durante a operação, o sistema deve indicar claramente seu estado ao operador. O LED RGB deve assumir apenas uma cor por vez, representando o modo atual da máquina:

Verde → operação normal

Amarelo → modo de atenção

Vermelho → modo crítico

O operador pode pressionar os botões a qualquer momento para alterar o modo de funcionamento. No entanto, durante os testes, foi observado que operadores podem pressionar mais de um botão ao mesmo tempo, o que pode gerar conflitos na definição do estado.
O sistema deve tratar essas situações, garantindo que apenas um modo esteja ativo por vez, evitando combinações indevidas de cores no LED RGB.
Além disso, o potenciômetro possui valores entre 0 e 1023 e deve ser interpretado como níveis de intensidade luminosa do LED, variando de baixa a alta intensidade. O sistema deve ajustar o brilho da cor selecionada de acordo com esse valor.
Caso o operador pressione o botão de desligamento, o sistema deve apagar o LED RGB e retornar ao estado inicial.

1) Identifique as entradas e saídas do sistema 
2) Apresente todos os componentes do sistema e para que eles servem
3) Apresente as regras de funcionamento a serem implementadas
4) Explique como você utilizaria estruturas if para controlar o sistema
