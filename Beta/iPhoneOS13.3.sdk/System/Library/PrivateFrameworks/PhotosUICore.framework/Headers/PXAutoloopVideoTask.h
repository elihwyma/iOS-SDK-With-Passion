/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol OS_dispatch_queue, PXAutoloopVideoTaskDelegate;

@interface PXAutoloopVideoTask : NSObject

{
    NSObject<OS_dispatch_queue> *_performQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    void *_ivarQueueIdentifier;
    id <PXAutoloopVideoTaskDelegate> _ivarQueue_delegate;
    long long _ivarQueue_status;
    double _ivarQueue_progress;
    NSError *_ivarQueue_error;
    struct {
        _Bool respondsToProgressDidChange;
        _Bool respondsToStatusDidChange;
    } _ivarQueue_delegateFlags;
    NSString *_temporaryFilesDirectory;
}

@property (weak, nonatomic) id <PXAutoloopVideoTaskDelegate> delegate;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSString *temporaryFilesDirectory;

- (id)init;
- (void)cancel;
- (void)setError:(id)arg1;
- (void)_reset;
- (void)setStatus:(long long)arg1;
- (void)setProgress:(double)arg1;
- (_Bool)_isRunning;
- (void)runWithInput:(id)arg1;
- (void)performTaskWithInput:(id)arg1;
- (void)setTemporaryFilesDirectory:(id)arg1;
- (_Bool)_isOnIvarQueue;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;

@end
