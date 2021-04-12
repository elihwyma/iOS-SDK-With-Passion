import os, sys

#----------------------------------------------------------------------------------------------------
def shouldIgnore(input):
    return input == '.DS_Store'
    
def processEmptyPrivateFramework(frameworkPath):
    aggregateFolderPath = os.path.join(frameworkPath, 'Headers')
    
    os.remove(frameworkPath)
    os.mkdir(frameworkPath)
    os.mkdir(aggregateFolderPath)
    
def processNormalPrivateFramework(frameworkPath):
    frameworkFolderName = os.path.basename(frameworkPath)
    frameworkName = os.path.splitext(frameworkFolderName)[0]

    aggregateFolderName = 'Headers'
    aggregateFolderPath = os.path.join(frameworkPath, aggregateFolderName)
    aggregateFileName = frameworkName + '.h'
    aggregateFilePath = os.path.join(aggregateFolderPath, aggregateFileName)

    if os.path.exists(aggregateFilePath):
        print('Error: aggregate file already exists')
        exit()
    if os.path.exists(aggregateFolderPath):
        print('Error: aggregate folder already exists')
        exit()
        
    os.mkdir(aggregateFolderPath)

    headerFileNames = [n for n in next(os.walk(frameworkPath))[2]]
    headerFileNames.sort(key=lambda s: s.casefold())
    lines = []
    for headerFileName in headerFileNames:
        if shouldIgnore(headerFileName):
            continue
            
        headerFilePath = os.path.join(frameworkPath, headerFileName)
        newHeaderFilePath = os.path.join(aggregateFolderPath, headerFileName)
        os.rename(headerFilePath, newHeaderFilePath)
        
        line = '#import "' + headerFileName + '"'
        lines.append(line)
        
    contents = '\n'.join(lines)
    with open(aggregateFilePath, 'w') as f:
        f.write(contents)
        
#----------------------------------------------------------------------------------------------------
if len(sys.argv) <= 1 or sys.argv[1] in ['-h', '--help', 'help']:
    print('Usage:')
    print('    python3 createSDK.py <path to frameworks folder>')
    print('Example:')
    print('    python3 adaptPrivateFrameworks.py ~/Downloads/iPhoneOS.sdk/System/Library/PrivateFrameworks')
    exit()
if not os.path.exists(sys.argv[1]):
    print('Error: specified folder does not exist')
    exit()
    
#----------------------------------------------------------------------------------------------------
privateFrameworksPath = sys.argv[1]
allPrivateFrameworks = next(os.walk(privateFrameworksPath))
normalPrivateFrameworks = [n for n in allPrivateFrameworks[1]]
emptyPrivateFrameworks = [n for n in allPrivateFrameworks[2]]
normalPrivateFrameworks.sort(key=lambda s: s.casefold())
emptyPrivateFrameworks.sort(key=lambda s: s.casefold())

for emptyPFName in emptyPrivateFrameworks:
    if shouldIgnore(emptyPFName):
        continue
        
    print('Processing ' + emptyPFName + '...')
    emptyPFPath = os.path.join(privateFrameworksPath, emptyPFName)
    processEmptyPrivateFramework(emptyPFPath)
    
for normalPFName in normalPrivateFrameworks:
    if shouldIgnore(normalPFName):
        continue
        
    normalPFPath = os.path.join(privateFrameworksPath, normalPFName)
    print('Processing ' + normalPFName + '...')
    processNormalPrivateFramework(normalPFPath)
