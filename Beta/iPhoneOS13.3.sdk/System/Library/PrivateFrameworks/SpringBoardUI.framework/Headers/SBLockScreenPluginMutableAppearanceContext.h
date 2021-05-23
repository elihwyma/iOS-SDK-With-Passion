/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/SBLockScreenPluginAppearanceContext.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long notificationBehavior;
@property (copy, nonatomic, readonly) NSArray *elementOverrides;
@property (retain, nonatomic, readonly) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) struct CGRect presentationRegion;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
