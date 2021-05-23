/*
 Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <Foundation/NSObject.h>

@protocol AXCameraTorchManager, OS_dispatch_queue;

@interface AXCameraTorchManagerBackgroundAdapter : NSObject

{
    NSObject<OS_dispatch_queue> *_q;
    id <AXCameraTorchManager> _synchronousManager;
}

@property (nonatomic, readonly) id <AXCameraTorchManager> synchronousTorchManager;

- (id)initWithCameraTorchManager:(id)arg1;
- (void)openTorchDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeTorchDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)turnTorchOnWithCompletion:(CDUnknownBlockType)arg1;
- (void)turnTorchOffWithCompletion:(CDUnknownBlockType)arg1;

@end
