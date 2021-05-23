/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _HMCameraSnapshot : _HMCameraSource

{
    NSDate *_captureDate;
}

@property (copy, nonatomic, readonly) NSDate *captureDate;

- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 captureDate:(id)arg6;
- (void)_releaseSlotIdentifier;

@end
