/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class HRListItemLabel, UILabel;

@interface HRTitledListItemLabel : UIView

{
    HRListItemLabel *_listItemLabel;
    UILabel *_bodyLabel;
    long long _currentUserInterfaceStyle;
}

@property (retain, nonatomic) HRListItemLabel *listItemLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (nonatomic) long long currentUserInterfaceStyle;

- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)_bodyLabelFont;
- (id)initWithView:(id)arg1 size:(struct CGSize)arg2 title:(id)arg3 body:(id)arg4;
- (double)_listItemLabelToBody;
- (double)_bodyLabelToBottom;

@end
