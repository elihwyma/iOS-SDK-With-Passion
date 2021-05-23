/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/Swift-Protocol.h>

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginAppearance <Swift>

@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long notificationBehavior;
@property (copy, nonatomic, readonly) NSArray *elementOverrides;
@property (retain, nonatomic, readonly) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) struct CGRect presentationRegion;

@end
