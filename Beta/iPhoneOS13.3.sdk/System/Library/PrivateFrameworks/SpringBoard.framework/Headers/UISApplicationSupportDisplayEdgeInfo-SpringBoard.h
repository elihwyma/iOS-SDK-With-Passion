/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKitServices/UISApplicationSupportDisplayEdgeInfo.h>

@interface UISApplicationSupportDisplayEdgeInfo (SpringBoard)

+ (id)sb_thisDeviceDisplayEdgeInfo;
+ (id)sb_homeButtonDeviceDisplayEdgeInfo;
+ (id)sb_displayEdgeInfoForClassicMode:(long long)arg1;
+ (id)sb_floatingApplicationDisplayEdgeInfo;
+ (id)sb_roundCornerPadDisplayEdgeInfo;
+ (id)sb_roundCornerPhoneDisplayEdgeInfo;

- (id)sb_displayEdgeInfoWithSafeAreaInsetsForStatusBarHeight:(double)arg1;
- (void)sb_applyDisplayEdgeInfoToSceneSettings:(id)arg1;
- (struct UIEdgeInsets)sb_orientedEdgeInsetsForInterfaceOrientation:(long long)arg1 traitCollection:(id)arg2;

@end
