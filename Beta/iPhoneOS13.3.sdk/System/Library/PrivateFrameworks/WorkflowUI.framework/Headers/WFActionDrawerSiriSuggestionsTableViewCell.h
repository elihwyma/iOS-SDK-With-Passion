/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class INIntent, NSLayoutConstraint, UIButton, UICollectionView, UIImage, UIViewController, WFActionDrawerSection, WFActionDrawerSiriSuggestionsCollectionViewManager, WFModuleTitleView;

@protocol WFActionDrawerSiriSuggestionsTableViewCellDelegate;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell

{
    _Bool _configuredForDailyRoutines;
    WFActionDrawerSection *_section;
    id <WFActionDrawerSiriSuggestionsTableViewCellDelegate> _delegate;
    UIViewController *_containingViewController;
    WFModuleTitleView *_titleView;
    UIButton *_infoButton;
    UICollectionView *_donationsCollectionView;
    INIntent *_intent;
    UIImage *_icon;
    WFActionDrawerSiriSuggestionsCollectionViewManager *_donationsCollectionViewManager;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property (weak, nonatomic) WFModuleTitleView *titleView;
@property (weak, nonatomic) UIButton *infoButton;
@property (weak, nonatomic) UICollectionView *donationsCollectionView;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) WFActionDrawerSiriSuggestionsCollectionViewManager *donationsCollectionViewManager;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (retain, nonatomic) WFActionDrawerSection *section;
@property (weak, nonatomic) id <WFActionDrawerSiriSuggestionsTableViewCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (nonatomic) _Bool configuredForDailyRoutines;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2;
- (void)configureWithActionDrawerSection:(id)arg1;
- (void)configureLoading;
- (void)infoButtonPressed;

@end
