/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSMutableDictionary, NSOperationQueue, PFSharingRemakerOptions;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PFSharingRemaker : NSObject

{
    NSObject<OS_dispatch_queue> *_remakerQueue;
    float _progress;
    NSMutableDictionary *_inProgressOperationByUUID;
    _Bool _remakerSuccess;
    _Bool _abortedRemaker;
    _Bool _cancelledRemaker;
    NSError *_remakerError;
    NSOperationQueue *_remakeOperationQueue;
    NSObject<OS_dispatch_source> *_progressTimer;
    PFSharingRemakerOptions *__options;
    NSArray *__operations;
    CDUnknownBlockType __progressHandler;
    CDUnknownBlockType __completionHandler;
}

@property (retain, nonatomic, setter=_setOptions:) PFSharingRemakerOptions *_options;
@property (retain, nonatomic, setter=_setOperations:) NSArray *_operations;
@property (copy, nonatomic, setter=_setProgressHandler:) CDUnknownBlockType _progressHandler;
@property (copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler;

+ (id)remakerWithOperations:(id)arg1 options:(id)arg2;

- (id)init;
- (void)_updateProgress;
- (void)cancelRemaking;
- (void)remakeWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_computeProgress;
- (void)_callProgressBlockWithProgress:(double)arg1;
- (void)_endSessionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_configureVideoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_configurePhotoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_completeOperationWithUUID:(id)arg1;
- (void)_abortWithUnderlyingOperationError:(id)arg1;

@end
