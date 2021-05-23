/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface DEDAttachmentHandler : NSObject

{
    _Bool _compressOnAttach;
    NSObject<OS_os_log> *_log;
}

@property (retain) NSObject<OS_os_log> *log;
@property _Bool compressOnAttach;

- (id)init;
- (id)directoryForBugSession:(id)arg1;
- (id)dedDirectory;
- (id)_processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3 rootDir:(id)arg4;
- (id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(_Bool)arg4;
- (id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4 withRootDir:(id)arg5;
- (id)processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3;
- (void)removeDEFiles:(id)arg1 inSession:(id)arg2;
- (id)collectedGroupsForSession:(id)arg1 matchingExtensions:(id)arg2;
- (id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4;
- (void)removeDirectoryForBugSession:(id)arg1;
- (unsigned long long)directorySizeForBugSession:(id)arg1;
- (id)identifierForAdoptingFile:(id)arg1;
- (id)directoryForBugSession:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3;

@end
