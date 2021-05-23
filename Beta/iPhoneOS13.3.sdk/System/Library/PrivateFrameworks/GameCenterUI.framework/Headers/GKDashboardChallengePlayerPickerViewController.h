/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKChallenge, NSArray, NSLayoutConstraint, NSString, UIBarButtonItem, UIButton, UILabel, UITextField, UIView, UIViewController;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController

{
    _Bool _shouldIgnoreClearSelection;
    _Bool _shouldApplyInitialOffset;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    GKChallenge *_challenge;
    NSArray *_initiallySelectedPlayers;
    UILabel *_descriptionLabel;
    UIButton *_sendButton;
    UIBarButtonItem *_customizeMessageButton;
    UITextField *_messageField;
    UIView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    UIViewController *_composeController;
    struct UIEdgeInsets _initialInsets;
}

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) _Bool shouldIgnoreClearSelection;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UIButton *sendButton;
@property (nonatomic) UIBarButtonItem *customizeMessageButton;
@property (nonatomic) UITextField *messageField;
@property (nonatomic) UIView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) double scrollingHeaderTopConstraintConstant;
@property (nonatomic) struct UIEdgeInsets initialInsets;
@property (nonatomic) _Bool shouldApplyInitialOffset;
@property (nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint;
@property (nonatomic) double initialCustomizeMessageBottomConstraintConstant;
@property (retain, nonatomic) UIViewController *composeController;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)clearSelection;
- (void)addMessage:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)loadData;
- (void)send:(id)arg1;
- (void)cancel:(id)arg1;
- (void)adjustCustomizeMessageConstraint;
- (void)_updateButtonEnableState;
- (void)applyInitialContentOffset;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (id)initWithChallenge:(id)arg1 initiallySelectedPlayers:(id)arg2;

@end
