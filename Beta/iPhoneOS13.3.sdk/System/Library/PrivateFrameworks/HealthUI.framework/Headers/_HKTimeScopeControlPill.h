/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTimeScopeControl.h>

@class NSArray;

@interface _HKTimeScopeControlPill : HKTimeScopeControl

{
    NSArray *_buttons;
    long long _selectedButtonIndex;
}

- (void)layoutSubviews;
- (void)setSelectedTimeScope:(long long)arg1;
- (long long)selectedTimeScope;
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;
- (id)_generateButtonsWithTimeScopes:(id)arg1 shortTextStyle:(_Bool)arg2;
- (void)_selectButtonAtIndex:(long long)arg1;
- (void)_setSelectedButtonIndex:(long long)arg1;
- (void)_deselectAllButtons;
- (void)_buttonSelected:(id)arg1;

@end
