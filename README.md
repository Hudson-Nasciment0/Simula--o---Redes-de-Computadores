<h1 align="center"> Simulação de Redes de Computadores</h1>

<p align="center">
Projeto desenvolvido em <strong>Linguagem C</strong> para a disciplina de <strong>Estrutura de Dados</strong>, com o objetivo de simular o funcionamento de uma rede simples de computadores utilizando estruturas de dados clássicas.
</p>

<p align="center">
A aplicação demonstra, de forma prática, como filas, pilhas e listas encadeadas podem ser utilizadas para representar situações reais encontradas em redes de computadores, como transmissão de pacotes, tratamento de falhas e gerenciamento de pacotes ativos.
</p>

<hr>

<h2> Sobre o Projeto</h2>

<p>
O sistema simula uma rede de computadores baseada no conceito de <strong>comutação de pacotes</strong>, onde cada pacote possui informações importantes para sua transmissão.
</p>

<p>Cada pacote contém:</p>

<ul>
<li>Número do pacote</li>
<li>Tamanho em KB</li>
<li>Tempo estimado de transmissão</li>
</ul>

<p>Para representar os diferentes estados dos pacotes na rede, foram utilizadas três estruturas de dados fundamentais:</p>

<ul>
<li><strong>Fila</strong> – Pacotes aguardando transmissão</li>
<li><strong>Pilha</strong> – Pacotes com erro de transmissão</li>
<li><strong>Lista Encadeada</strong> – Pacotes ativos circulando na rede</li>
</ul>

<hr>

<h2> Tecnologias Utilizadas</h2>

<table>
<tr>
<th>Tecnologia</th>
<th>Finalidade</th>
</tr>

<tr>
<td>Linguagem C</td>
<td>Desenvolvimento da aplicação</td>
</tr>

<tr>
<td>GCC</td>
<td>Compilação do projeto</td>
</tr>

<tr>
<td>Visual Studio Code</td>
<td>Ambiente de desenvolvimento</td>
</tr>

<tr>
<td>Git</td>
<td>Controle de versão</td>
</tr>

<tr>
<td>GitHub</td>
<td>Hospedagem do repositório</td>
</tr>
</table>

<hr>

<h2> Como Compilar</h2>

<pre>
gcc main.c fila.c pilha.c lista.c -o rede
</pre>

<hr>

<h2> Como Executar</h2>

<p><strong>Linux:</strong></p>

<pre>
./rede
</pre>

<p><strong>Windows:</strong></p>

<pre>
rede.exe
</pre>

<p><strong>VScode:</strong></p>

<pre>
Powershell -> ./rede
</pre>

<pre>
Comand Prompt -> rede
</pre>

<hr>

<h2> Objetivos</h2>

<ul>
<li>Aplicar conceitos de Estrutura de Dados</li>
<li>Utilizar ponteiros e alocação dinâmica</li>
<li>Implementar estruturas em Linguagem C</li>
<li>Desenvolver lógica de programação</li>
<li>Simular cenários reais de redes de computadores</li>
<li>Praticar modularização de código</li>
<li>Compreender o funcionamento de estruturas dinâmicas</li>
</ul>

<hr>

<h2> Estruturas de Dados Utilizadas</h2>

<h3> Fila (FIFO)</h3>

<p>
A fila segue o princípio <strong>FIFO (First In, First Out)</strong>, ou seja, o primeiro pacote que entra é o primeiro a ser transmitido.
</p>

<p><strong>Operações implementadas:</strong></p>

<ul>
<li>Enfileirar</li>
<li>Desenfileirar</li>
<li>Mostrar fila</li>
</ul>

<h3> Pilha (LIFO)</h3>

<p>
A pilha segue o princípio <strong>LIFO (Last In, First Out)</strong>, onde o último pacote que apresentou erro é o primeiro a ser retransmitido.
</p>

<p><strong>Operações implementadas:</strong></p>

<ul>
<li>Empilhar</li>
<li>Desempilhar</li>
<li>Mostrar pilha</li>
</ul>

<h3> Lista Encadeada</h3>

<p>
A lista encadeada foi utilizada para controlar os pacotes ativos na rede, permitindo inserções, buscas e remoções de forma dinâmica.
</p>

<p><strong>Operações implementadas:</strong></p>

<ul>
<li>Inserir pacote</li>
<li>Buscar pacote</li>
<li>Remover pacote</li>
<li>Listar pacotes</li>
</ul>

<hr>

<h2> Funcionalidades</h2>

<ul>
<li> Inserção de pacotes na fila</li>
<li> Transmissão de pacotes</li>
<li> Registro de falhas de transmissão</li>
<li> Retransmissão de pacotes com erro</li>
<li> Controle de pacotes ativos na rede</li>
<li> Busca de pacotes por ID</li>
<li> Remoção de pacotes entregues</li>
<li> Exibição das estruturas de dados</li>
</ul>

<hr>

<h2> Estrutura do Projeto</h2>


  <img src="Estrutura do Projeto - img.png" alt="Estrutura do Projeto"/>
<hr>


<h3>Descrição dos Arquivos</h3>

<ul>
<li><strong>main.c</strong> -> Controle principal da simulação.</li>
<li><strong>fila.h</strong> -> Definições da estrutura Fila.</li>
<li><strong>fila.c</strong> -> Implementação das funções da fila.</li>
<li><strong>pilha.h</strong> -> Definições da estrutura Pilha.</li>
<li><strong>pilha.c</strong> -> Implementação das funções da pilha.</li>
<li><strong>lista.h</strong> -> Definições da Lista Encadeada.</li>
<li><strong>lista.c</strong> -> Implementação das funções da lista.</li>
</ul>

<hr>

<h2> Fluxo da Simulação</h2>

<ol>
<li>Chegada dos pacotes na rede.</li>
<li>Armazenamento dos pacotes na fila.</li>
<li>Transmissão dos pacotes.</li>
<li>Detecção de falha de transmissão.</li>
<li>Envio dos pacotes com erro para a pilha.</li>
<li>Retransmissão do último pacote com erro.</li>
<li>Controle dos pacotes ativos pela lista encadeada.</li>
<li>Remoção dos pacotes entregues.</li>
</ol>

<hr>

<h2> Conceitos Aplicados</h2>

<ul>
<li>FIFO (First In First Out)</li>
<li>LIFO (Last In First Out)</li>
<li>Lista Encadeada Simples</li>
<li>Ponteiros</li>
<li>Alocação dinâmica com malloc()</li>
<li>Liberação de memória com free()</li>
<li>Modularização de código</li>
<li>Estruturas Dinâmicas</li>
<li>Manipulação de memória</li>
<li>Organização em múltiplos arquivos</li>
</ul>

<hr>

<h2> Perguntas Teóricas</h2>

<h3>1. Por que a fila representa bem a transmissão de pacotes?</h3>

<p>
A fila representa bem a transmissão de pacotes porque segue o princípio
<strong>FIFO (First In, First Out)</strong>, onde o primeiro pacote que entra
na fila é o primeiro a ser transmitido. Isso garante que os pacotes sejam
processados na mesma ordem em que chegaram à rede.
</p>

<h3>2. Por que a pilha pode representar retransmissão?</h3>

<p>
A pilha representa retransmissão porque segue o princípio
<strong>LIFO (Last In, First Out)</strong>. Dessa forma, o último pacote que
apresentou erro pode ser retransmitido primeiro, permitindo um tratamento
rápido dos erros mais recentes.
</p>

<h3>3. Por que a lista encadeada ajuda no controle de pacotes ativos?</h3>

<p>
A lista encadeada permite inserir, buscar e remover pacotes dinamicamente
sem a necessidade de definir um tamanho fixo previamente. Isso facilita o
gerenciamento dos pacotes que estão circulando na rede.
</p>

<h3>4. Qual estrutura melhor representa atraso de fila?</h3>

<p>
A fila é a estrutura que melhor representa atraso, pois os pacotes aguardam
sua vez para serem transmitidos. Quanto maior a quantidade de pacotes na
fila, maior será o tempo de espera até a transmissão.
</p>

<hr>

<h2> Aprendizados</h2>

<p>
O desenvolvimento deste projeto permitiu consolidar conhecimentos fundamentais de Estrutura de Dados, especialmente no uso de filas, pilhas e listas encadeadas. Além disso, foram praticados conceitos importantes de programação em C, como ponteiros, alocação dinâmica de memória, modularização e organização de código em múltiplos arquivos.
</p>

<p>
A simulação também demonstrou como estruturas de dados podem ser aplicadas na resolução de problemas reais, aproximando os conceitos teóricos estudados em sala de aula de situações encontradas em sistemas computacionais e redes de computadores.
</p>

<hr>

<h2> Integrantes do Grupo</h2>

<table>
    <tr>
        <td>Beatriz Barboza Marques Lima da Silva</td>
    </tr>
    <tr>
        <td>Davy Queiroz da Silva</td>
    </tr>
    <tr>
        <td>Hudson Nascimento Pereira Vieira</td>
    </tr>
    <tr>
        <td>Igor dos Santos Moura</td>
    </tr>
    <tr>
        <td>Matheus Lima Rocha</td>
    </tr>
    <tr>
        <td>Rafael dos Santos Paulo</td>
    </tr>
    <tr>
        <td>Rodrigo Gomes da Conceição</td>
    </tr>
</table>

<hr>

<h2> Informações Acadêmicas</h2>

<table>
<tr>
<th>Item</th>
<th>Informação</th>
</tr>

<tr>
<td>Disciplina</td>
<td>Estrutura de Dados</td>
</tr>

<tr>
<td>Professor</td>
<td>Gioliano Barbosa Bertoni</td>
</tr>

<tr>
<td>Curso</td>
<td>Engenharia de Software</td>
</tr>

<tr>
<td>Instituição</td>
<td>Universidade de Vassouras</td>
</tr>

<tr>
<td>Semestre</td>
<td>3° Período</td>
</tr>
</table>

<hr>


