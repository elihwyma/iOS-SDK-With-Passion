/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <UIKit/UILabel.h>

@interface UILabel (NAUIAdditions)

@property (nonatomic, readonly) double naui_baselineOffsetFromBottom;
@property (nonatomic, readonly) double naui_capOffsetFromTop;

- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;
- (double)naui_distanceFromBaselineToCoordinate:(double)arg1 inView:(id)arg2;

@end
