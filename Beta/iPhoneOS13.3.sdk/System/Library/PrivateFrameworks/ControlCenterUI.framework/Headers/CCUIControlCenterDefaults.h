/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) _Bool shouldAlwaysBeEnabled;
@property (nonatomic, readonly) _Bool shouldExcludeControlCenterFromStatusBarOverrides;
@property (nonatomic) _Bool hasForceTouchedToExpandModule;
@property (nonatomic) _Bool hasLongPressedToExpandModule;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
