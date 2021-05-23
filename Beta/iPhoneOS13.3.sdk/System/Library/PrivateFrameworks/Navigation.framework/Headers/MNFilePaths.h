/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@interface MNFilePaths : NSObject

+ (id)navTempDirectoryPath;
+ (id)routeHandleExtension;
+ (_Bool)createFolderIfNotPresent:(id)arg1 error:(id *)arg2;
+ (id)navTracesDirectoryPath;
+ (id)navTraceExtension;
+ (id)_homeDirectoryPath;
+ (id)_cachesDirectoryPath;
+ (id)navdCacheDirectoryPath;
+ (id)timeballDatabasePath;

@end
