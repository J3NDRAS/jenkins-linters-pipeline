pipeline {
    agent any

    stages {
        stage('GCC z warningami') {
            steps {
                sh 'gcc -Wall -Wextra -pedantic -c main.c || true'
            }
        }
        stage('Cppcheck') {
            steps {
                sh 'cppcheck --enable=all --inconclusive main.c || true'
            }
        }
        stage('Cppcheck (MISRA)') {
            steps {
                sh 'cppcheck --addon=misra main.c || true'
            }
        }
        stage('Clang-owy') {
            steps {
                sh 'clang-tidy main.c -- || true'
            }
        }
        stage('Splint') {
            steps {
                sh 'splint main.c || true'
            }
        }
    }
}
