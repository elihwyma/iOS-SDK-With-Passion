import glob, os, subprocess, sys

#----------------------------------------------------------------------------------------------------

def shouldIgnoreFileName(input):
    parsedInput = os.path.basename(input)
    ignores = ['.DS_Store']
    return shouldIgnoreFileName in ignores
    
#----------------------------------------------------------------------------------------------------

if len(sys.argv) <= 1 or sys.argv[1] in ['-h', '--help', 'help']:
    print('Usage:')
    print('    python3 createSDK.py <path to dyld_shared_cache>')
    exit()
if not os.path.exists(sys.argv[1]):
    print('Error: specified dyld_shared_cache does not exist')
    exit()
    
#----------------------------------------------------------------------------------------------------

dyldSharedCachePath = sys.argv[1]
cwd = os.getcwd()
sdkName = 'iPhoneOS.sdk'
frameworkFolderPaths = ['/System/Library/Frameworks', '/System/Library/PrivateFrameworks']

sdkPath = os.path.join(cwd, sdkName)
if not os.path.exists(sdkPath):
    subprocess.run(['dyld_shared_cache_util', '-extract', sdkName, dyldSharedCachePath])
    
for frameworkFolderPathRaw in frameworkFolderPaths:
    if shouldIgnoreFileName(frameworkFolderPathRaw):
        continue
        
    sdkRoot = os.path.join(cwd, sdkName)
    frameworkFolderPath = os.path.join(sdkRoot, frameworkFolderPathRaw.lstrip('/'))
    frameworkPaths = glob.glob(frameworkFolderPath + '/**/*.framework', recursive=True)
    frameworkPaths.sort(key=lambda s: s.casefold())
    
    for frameworkPath in frameworkPaths:
        if shouldIgnoreFileName(frameworkPath):
            continue
        
        frameworkName = os.path.basename(frameworkPath)
        frameworkBinaryName = os.path.splitext(frameworkName)[0]
        frameworkBinaryPath = os.path.join(frameworkPath, frameworkBinaryName)
        frameworkPathRaw = '/' + os.path.relpath(frameworkPath, sdkRoot)
        frameworkBinaryPathRaw = os.path.join(frameworkPathRaw, frameworkBinaryName)
        
        tbdFileName = frameworkBinaryName + '.tbd'
        tbdFilePath = os.path.join(frameworkPath, tbdFileName)
        if not os.path.exists(tbdFilePath):
            subprocess.run(['tbd', '-p', frameworkBinaryPath, '-o', tbdFilePath])
            
        headersFolderPath = os.path.join(frameworkPath, 'Headers')
        headersFolderPathAlreadyExists = os.path.exists(headersFolderPath)
        if not headersFolderPathAlreadyExists:
            process = subprocess.run(['classdump', '-H', '-o', headersFolderPath, frameworkBinaryPath])
            classDumpCreatedHeaders = process.returncode == 0 and os.path.exists(headersFolderPath)
            
        if headersFolderPathAlreadyExists or classDumpCreatedHeaders:
            aggregateHeaderName = frameworkBinaryName + '.h'
            aggregateHeaderPath = os.path.join(headersFolderPath, aggregateHeaderName)
            
            if not os.path.exists(aggregateHeaderPath):
                headerNames = os.listdir(headersFolderPath)
                headerNames.sort(key=lambda s: s.casefold())
                lines = []
                
                lines.append('/*')
                lines.append(' Image: ' + frameworkBinaryPathRaw)
                lines.append(' */')
                lines.append('')
                
                for headerName in headerNames:
                    if shouldIgnoreFileName(headerName):
                        continue
                    if not headerName.endswith('.h'):
                        continue
                    lines.append('#import "' + headerName + '"')
                    
                lines.append('')
                
                with open(aggregateHeaderPath, 'w') as f:
                    contents = '\n'.join(lines)
                    f.write(contents)
