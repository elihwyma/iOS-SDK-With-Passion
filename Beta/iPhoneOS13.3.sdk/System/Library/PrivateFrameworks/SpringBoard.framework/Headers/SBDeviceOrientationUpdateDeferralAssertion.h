/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBDeviceOrientationUpdateManager;

@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject

{
    _Bool _invalidated;
    NSString *_reason;
    SBDeviceOrientationUpdateManager *_hackyBackReference;
}

@property (weak, nonatomic, setter=_setHackyBackReference:) SBDeviceOrientationUpdateManager *hackyBackReference;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithReason:(id)arg1;

@end
