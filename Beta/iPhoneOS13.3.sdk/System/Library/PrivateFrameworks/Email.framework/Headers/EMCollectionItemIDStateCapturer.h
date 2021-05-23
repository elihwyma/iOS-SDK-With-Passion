/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@protocol EFCancelable, OS_dispatch_queue;

@interface EMCollectionItemIDStateCapturer : NSObject

{
    NSObject<OS_dispatch_queue> *_stateCaptureQueue;
    id <EFCancelable> _stateCaptureCancelable;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateCaptureQueue;
@property (nonatomic, readonly) id <EFCancelable> stateCaptureCancelable;

- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;

@end
