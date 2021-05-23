/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject

{
    NSMutableDictionary *_fileWrappers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (void)removeAllFileWrappersForFileCache:(id)arg1;

@end
