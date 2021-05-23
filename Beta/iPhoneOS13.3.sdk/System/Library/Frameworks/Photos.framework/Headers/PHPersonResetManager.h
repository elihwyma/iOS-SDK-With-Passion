/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, PHPhotoLibrary;

@interface PHPersonResetManager : NSObject

{
    PHPhotoLibrary *_library;
    NSOperationQueue *_resetOperationQueue;
    _Bool _requiresPhotoAnalysisReset;
    CDUnknownBlockType _progressHandler;
    unsigned long long _batchSize;
}

@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) _Bool requiresPhotoAnalysisReset;

- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)resetPersonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetPersons:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
