/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKContactSkipControl, GKDashboardMultiplayerPickerDataSource, NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UISearchController, UISegmentedControl, UITextField, UIView, UIViewController, UIVisualEffectView;

@protocol GKDashboardMultiplayerPickerDelegate, GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController

{
    _Bool _supportsNearby;
    _Bool _shouldIgnoreClearSelection;
    _Bool _shouldApplyInitialOffset;
    _Bool _searching;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    id <GKDashboardMultiplayerPickerDelegate> _multiplayerPickerDelegate;
    NSArray *_initiallySelectedPlayers;
    UILabel *_descriptionLabel;
    UIButton *_sendButton;
    UIButton *_customizeMessageButton;
    UITextField *_messageField;
    UIView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    double _segmentControlHeight;
    UISegmentedControl *_sectionControl;
    GKContactSkipControl *_contactSkipControl;
    UIVisualEffectView *_effectView;
    UISearchController *_searchController;
    GKDashboardCollectionViewController *_searchResultsCollectionViewController;
    UIViewController *_composeController;
    struct UIEdgeInsets _initialInsets;
}

@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) _Bool shouldIgnoreClearSelection;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *customizeMessageButton;
@property (retain, nonatomic) UITextField *messageField;
@property (retain, nonatomic) UIView *scrollingHeader;
@property (retain, nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) double scrollingHeaderTopConstraintConstant;
@property (nonatomic) struct UIEdgeInsets initialInsets;
@property (nonatomic) _Bool shouldApplyInitialOffset;
@property (retain, nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint;
@property (nonatomic) double initialCustomizeMessageBottomConstraintConstant;
@property (nonatomic, readonly) _Bool excludesContacts;
@property (nonatomic, getter=isSearching) _Bool searching;
@property (nonatomic) double segmentControlHeight;
@property (nonatomic, readonly) GKDashboardMultiplayerPickerDataSource *pickerDataSource;
@property (retain, nonatomic) UISegmentedControl *sectionControl;
@property (retain, nonatomic) GKContactSkipControl *contactSkipControl;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) GKDashboardCollectionViewController *searchResultsCollectionViewController;
@property (retain, nonatomic) UIViewController *composeController;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool supportsNearby;
@property (nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate;
@property (weak, nonatomic) id <GKDashboardMultiplayerPickerDelegate> multiplayerPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)clearSelection;
- (void)addMessage:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)send:(id)arg1;
- (_Bool)hasData;
- (void)cancel:(id)arg1;
- (void)_updateCollectionView;
- (void)adjustCustomizeMessageConstraint;
- (void)_updateButtonEnableState;
- (void)applyInitialContentOffset;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (id)titleStringWithMaxSelectable:(long long)arg1;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(_Bool)arg2;
- (void)segmentSectionChanged:(id)arg1;
- (id)horizontalCollectionViewLayout;
- (id)verticalCollectionViewLayout;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 excludeContacts:(_Bool)arg3 tournament:(id)arg4;
- (void)contactSkipSelected:(id)arg1;

@end
