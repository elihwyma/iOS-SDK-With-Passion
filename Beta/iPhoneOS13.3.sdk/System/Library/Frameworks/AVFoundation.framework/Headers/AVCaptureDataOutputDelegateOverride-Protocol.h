/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol AVCaptureDataOutputDelegateOverride <Swift>

@property (nonatomic, readonly) id delegateOverride;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

- (unsigned short)setDelegateOverride:delegateOverrideCallbackQueue: /* Error: Ran out of types for this method. */;

@end
