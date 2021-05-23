/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXUISettingsLabeledSliderCell.h>

@interface AXUISettingsZoomLabeledSliderCell : AXUISettingsLabeledSliderCell

- (id)accessibilityLabel;
- (double)initialValue;
- (double)minimumValue;
- (double)maximumValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)_updateRightLabelWithValue:(double)arg1;
- (void)handleSliderBeingDragged:(id)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;

@end
