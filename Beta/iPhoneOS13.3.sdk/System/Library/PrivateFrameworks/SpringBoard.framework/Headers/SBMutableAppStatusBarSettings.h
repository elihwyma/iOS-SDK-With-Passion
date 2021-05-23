/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAppStatusBarSettings.h>

@class NSNumber, _UILegibilitySettings;

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings

@property (retain, nonatomic) NSNumber *alpha;
@property (nonatomic) long long style;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) int styleOverridesToCancel;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applySettings:(id)arg1;

@end
