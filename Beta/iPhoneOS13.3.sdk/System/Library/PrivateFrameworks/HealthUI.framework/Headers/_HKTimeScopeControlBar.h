/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTimeScopeControl.h>

@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl

{
    UISegmentedControl *_segments;
}

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelectedTimeScope:(long long)arg1;
- (long long)selectedTimeScope;
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;
- (void)_segmentValueChanged:(id)arg1;

@end
