/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkNoContentBannerView : UIView

{
    _Bool _siriButtonEnabled;
    _Bool _siriButtonSelected;
    UILabel *_titleLabel;
    UIButton *_siriButton;
    NSMutableArray *_constraintsForTitleLabel;
    NSMutableArray *_constraintsForTitleLabelAndSiriButton;
}

@property (retain) UILabel *titleLabel;
@property (retain) UIButton *siriButton;
@property (retain) NSMutableArray *constraintsForTitleLabel;
@property (retain) NSMutableArray *constraintsForTitleLabelAndSiriButton;
@property (nonatomic) _Bool siriButtonSelected;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) _Bool siriButtonEnabled;

- (void)select;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)updateConstraints;
- (void)setupClickGestureRecognizer;
- (void)clickGestureDidUpdate:(id)arg1;
- (void)deselect;
- (void)choose;
- (void)stateUpdated;
- (void)setupTitleLabel;
- (void)setupSiriButton;
- (void)setupConstraintsforTitleLabel;
- (void)setupConstraintsForTitleLabelAndSiriButton;
- (void)siriButtonTapped:(id)arg1;
- (void)siriButtonTouchDown:(id)arg1;
- (void)siriButtonTouchUp:(id)arg1;

@end
