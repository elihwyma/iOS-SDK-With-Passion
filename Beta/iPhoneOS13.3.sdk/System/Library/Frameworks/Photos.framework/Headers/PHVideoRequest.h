/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequest.h>

@class PHImageDisplaySpec, PHVideoRequestBehaviorSpec, PHVideoResult;

@protocol PHVideoRequestDelegate;

@interface PHVideoRequest : PHMediaRequest

{
    PHVideoResult *_videoResult;
    id <PHVideoRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHVideoRequestBehaviorSpec *_behaviorSpec;
}

@property (weak, nonatomic, readonly) id <PHVideoRequestDelegate> delegate;
@property (nonatomic, readonly) PHImageDisplaySpec *displaySpec;
@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;

- (void)_finish;
- (_Bool)isSynchronous;
- (void)startRequest;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSepc:(id)arg7 delegate:(id)arg8;
- (void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)videoURLBecameAvailable:(id)arg1 info:(id)arg2 error:(id)arg3;

@end
