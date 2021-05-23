/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/Swift-Protocol.h>

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginMutableAppearance <Swift>

@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) long long notificationBehavior;
@property (copy, nonatomic) NSArray *elementOverrides;
@property (retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGRect presentationRegion;

@end
