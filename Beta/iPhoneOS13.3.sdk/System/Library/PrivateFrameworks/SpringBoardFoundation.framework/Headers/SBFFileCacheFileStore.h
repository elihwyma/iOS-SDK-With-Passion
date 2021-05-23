/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SBFFileCacheFileStore : NSObject

{
    NSURL *_directoryURL;
}

@property (copy, nonatomic, readonly) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (void)removeAllFileWrappersForFileCache:(id)arg1;
- (id)fileURLForFileNamed:(id)arg1;

@end
