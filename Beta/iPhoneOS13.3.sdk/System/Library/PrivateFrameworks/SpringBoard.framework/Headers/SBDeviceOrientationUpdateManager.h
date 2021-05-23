/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject

{
    NSMutableSet *_deferralAssertions;
    _Bool _deviceOrientationIsDirty;
    id <BSInvalidatable> _stateCaptureHandle;
    long long _lastUpdatedDeviceOrientation;
}

@property (nonatomic, readonly, getter=isCurrentlyDeferringOrientationUpdates) _Bool currentlyDeferringOrientationUpdates;
@property (nonatomic) long long lastUpdatedDeviceOrientation;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1;
- (_Bool)_deviceOrientationUpdateNeededForOrientation:(long long)arg1;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)arg1;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)arg1;

@end
