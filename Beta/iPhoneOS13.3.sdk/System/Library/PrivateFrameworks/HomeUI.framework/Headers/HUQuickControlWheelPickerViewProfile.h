/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class UIColor;

@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile

{
    _Bool _sizeToFitTextWidth;
    _Bool _uppercaseRowTitles;
    _Bool _showOffState;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    double _selectedRowBorderWidth;
    double _selectedRowCornerRadius;
    unsigned long long _style;
}

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool sizeToFitTextWidth;
@property (nonatomic) _Bool uppercaseRowTitles;
@property (nonatomic) double selectedRowBorderWidth;
@property (nonatomic) double selectedRowCornerRadius;
@property (nonatomic) _Bool showOffState;
@property (nonatomic) unsigned long long style;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setDefaultStyleProperties;
- (void)_setMultiStateStyleProperties;

@end
