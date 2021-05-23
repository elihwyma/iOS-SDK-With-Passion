/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUChevronButton, HUColoredButton, NSArray, UILabel;

@protocol HUGridEmptyHomeViewDelegate;

@interface HUGridEmptyHomeView : UIView

{
    id <HUGridEmptyHomeViewDelegate> _delegate;
    UILabel *_instructionsLabel;
    HUColoredButton *_addAccessoryButton;
    HUChevronButton *_learnToAddAccessoryButton;
    HUChevronButton *_storeButton;
    NSArray *_constraints;
}

@property (retain, nonatomic) UILabel *instructionsLabel;
@property (retain, nonatomic) HUColoredButton *addAccessoryButton;
@property (retain, nonatomic) HUChevronButton *learnToAddAccessoryButton;
@property (retain, nonatomic) HUChevronButton *storeButton;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic, readonly) _Bool canAddAccessories;
@property (weak, nonatomic) id <HUGridEmptyHomeViewDelegate> delegate;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void)_setupCommonAppearance;
- (void)_addNewAccessory:(id)arg1;
- (void)_openLearnToAddAccessories:(id)arg1;
- (void)_openStore:(id)arg1;

@end
