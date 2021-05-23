/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

#import <SpringBoardUI/Swift-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginAppearanceContext : NSObject <Swift>

{
    _Bool hidden;
    unsigned long long restrictedCapabilities;
    long long backgroundStyle;
    long long presentationStyle;
    long long notificationBehavior;
    SBLockScreenLegibilitySettings *legibilitySettings;
    NSArray *elementOverrides;
    struct CGRect presentationRegion;
}

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
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRestrictedCapabilities:(unsigned long long)arg1;
- (void)setNotificationBehavior:(long long)arg1;
- (void)setElementOverrides:(id)arg1;
- (void)setPresentationRegion:(struct CGRect)arg1;
- (id)initWithAppearance:(id)arg1;

@end
