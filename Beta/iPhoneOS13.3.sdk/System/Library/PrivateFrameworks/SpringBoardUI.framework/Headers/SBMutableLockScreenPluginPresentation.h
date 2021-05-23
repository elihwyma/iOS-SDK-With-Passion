/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/SBLockScreenPluginPresentation.h>

@class _UILegibilitySettings;

@interface SBMutableLockScreenPluginPresentation : SBLockScreenPluginPresentation

@property (nonatomic) struct UIEdgeInsets suggestedContentInsets;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
