/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVFlashlight, NSString;

__attribute__((visibility("hidden")))
@interface VCCameraTorchManager : NSObject

{
    AVFlashlight *_flashlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)turnTorch:(_Bool)arg1;
- (_Bool)openTorchDevice;
- (void)closeTorchDevice;
- (void)turnTorchOn;
- (void)turnTorchOff;

@end
