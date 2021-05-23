/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool hasSeenACaseLatchCoverOnce;
@property (nonatomic, readonly) _Bool disableHomeButton;
@property (nonatomic, readonly) _Bool useHardwareSwitchAsOrientationLock;
@property (nonatomic, readonly) _Bool disableProximitySensor;
@property (nonatomic, readonly) _Bool disableHomeButtonDoublePress;
@property (nonatomic) long long homeButtonHapticType;

- (void)_bindAndRegisterDefaults;

@end
