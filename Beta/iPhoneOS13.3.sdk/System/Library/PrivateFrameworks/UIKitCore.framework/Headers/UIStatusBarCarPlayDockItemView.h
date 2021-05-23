/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSArray, NSLayoutConstraint, NSString, UILabel, UIStatusBarCarPlayDockAppItemButton, UIView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockItemView : UIStatusBarItemView

{
    _Bool _showingCallTimer;
    UILabel *_inCallDurationLabel;
    UIStatusBarCarPlayDockAppItemButton *_itemOneButton;
    UIStatusBarCarPlayDockAppItemButton *_itemTwoButton;
    UIStatusBarCarPlayDockAppItemButton *_itemThreeButton;
    NSLayoutConstraint *_inCallLabelSpacingConstraint;
    NSLayoutConstraint *_itemOneTopConstraint;
    NSArray *_currentBundleIdentifiers;
    NSString *_currentActiveBundleIdentifier;
    UIView *_preferredItemViewToFocus;
}

@property (retain, nonatomic) UILabel *inCallDurationLabel;
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemOneButton;
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemTwoButton;
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemThreeButton;
@property (retain, nonatomic) NSLayoutConstraint *inCallLabelSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *itemOneTopConstraint;
@property (copy, nonatomic) NSArray *currentBundleIdentifiers;
@property (copy, nonatomic) NSString *currentActiveBundleIdentifier;
@property (weak, nonatomic) UIView *preferredItemViewToFocus;
@property (nonatomic, getter=isShowingCallTimer) _Bool showingCallTimer;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)allowsUserInteraction;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)neededSizeForImageSet:(id)arg1;
- (double)extraRightPadding;
- (_Bool)animatesDataChange;
- (double)extraLeftPadding;
- (unsigned long long)_numberOfEnabledItems;
- (double)_neededSizeWithCallTimer;
- (double)_neededSizeWithoutCallTimer;
- (id)_toItemViewForBundleIdentifier:(id)arg1;
- (void)_updateInCallDurationIfNecessary:(id)arg1;
- (void)updateForNewStyle:(id)arg1;

@end
