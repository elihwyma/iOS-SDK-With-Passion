/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSMutableDictionary, NSString, UIView;

@interface GKContactSkipControl : UIControl

{
    NSArray *_values;
    NSString *_lastSelectedValue;
    NSArray *_buttons;
    UIView *_buttonView;
    UIView *_centeringView;
    NSMutableDictionary *_buttonsToTitles;
}

@property (retain, nonatomic) NSString *lastSelectedValue;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIView *centeringView;
@property (retain, nonatomic) NSMutableDictionary *buttonsToTitles;
@property (retain, nonatomic) NSArray *values;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)adjustForTraitCollection:(id)arg1;
- (void)setupButtonView;
- (void)setupValueButtons;
- (void)determineButtonFromGesture:(id)arg1;
- (long long)valueButtonCountThatFitsHeight:(double)arg1;
- (id)compactPhoneValues:(long long)arg1;
- (id)nextTitleFollowingValue:(id)arg1;
- (void)valueSelected:(id)arg1;

@end
