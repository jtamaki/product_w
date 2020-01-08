pipeline {
  agent any
  stages {
    stage('checkout') {
      steps {
	    echo 'checkout master'
      }
    }

    stage('build') {
      steps {
	    dir(./product) {
          sh '/src_make.sh'
		}
      }
    }

    stage('build unit test') {
      steps {
	    dir(./product) {
          sh './product/test_make.sh'
		}
      }
    }

    stage('run unit test') {
      steps {
	    dir(./product) {
          sh './product/test_run.sh'
          xunit thresholds: [failed(unstableThreshold: '0')], tools: [GoogleTest(deleteOutputFiles: true, failIfNotNew: true, pattern: 'test_result.xml', skipNoTestFiles: false, stopProcessingIfError: true)]
    	}
      }
    }
  }
}