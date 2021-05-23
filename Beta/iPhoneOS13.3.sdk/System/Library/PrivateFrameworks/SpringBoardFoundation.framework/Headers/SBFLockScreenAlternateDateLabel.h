/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIView.h>

@class NSDate, NSString, SBUILegibilityLabel, UIFont, _UILegibilitySettings;

@interface SBFLockScreenAlternateDateLabel : UIView

{
    UIFont *_font;
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    NSDate *_date;
    SBUILegibilityLabel *_label;
}

@property (retain, nonatomic) SBUILegibilityLabel *label;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) struct UIEdgeInsets characterOverflowInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

+ (_Bool)showAlternateDate;
+ (id)_lunarCalendarIdentifier;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 font:(id)arg3;
- (id)_alternateDateString;

@end
