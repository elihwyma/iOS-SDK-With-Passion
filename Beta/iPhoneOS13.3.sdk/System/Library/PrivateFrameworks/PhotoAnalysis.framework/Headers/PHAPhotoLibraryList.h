/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject

{
    NSMutableDictionary *_photoLibrariesByPath;
}

@property (retain) NSMutableDictionary *photoLibrariesByPath;
@property (readonly) unsigned long long count;

- (id)init;
- (void)saveToPersistentStorage;
- (void)addPhotoLibraryAtURL:(id)arg1;
- (void)removePhotoLibraryAtURL:(id)arg1;
- (void)removeAllPhotoLibraries;
- (void)enumeratePhotoLibrariesWithBlock:(CDUnknownBlockType)arg1;

@end
