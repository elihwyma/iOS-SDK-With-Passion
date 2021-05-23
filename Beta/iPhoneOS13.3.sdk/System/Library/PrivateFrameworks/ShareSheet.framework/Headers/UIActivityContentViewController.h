/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UIViewController.h>

#import <ShareSheet/Swift-Protocol.h>

@class LPLinkMetadata, LPLinkMetadataObserver, LPLinkView, NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSNumber, NSString, NSUUID, SFAirDropMagicHeadViewController, UIBarButtonItem, UICollectionViewDiffableDataSource, UIVisualEffectView, _UIActivityContentCollectionView, _UIActivityContentTitleView;

@protocol UIActivityContentDelegate;

@interface UIActivityContentViewController : UIViewController <Swift>

{
    _Bool _configureForCloudSharing;
    _Bool _configureForPhotosEdit;
    _Bool _wantsObjectManipulation;
    _Bool _sharingCollapsed;
    _Bool _photosLandscapeMode;
    _Bool _contentInstalled;
    _Bool _ignorePersonTap;
    id <UIActivityContentDelegate> _delegate;
    UIViewController *_photosCarouselViewController;
    NSArray *_applicationActivities;
    NSDictionary *_activitiesByUUID;
    NSMutableDictionary *_identifierToProgress;
    NSMutableDictionary *_identifierToPulse;
    NSMutableDictionary *_identifierToSubtitle;
    _UIActivityContentCollectionView *_activityCollectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
    LPLinkView *_headerLinkView;
    LPLinkMetadataObserver *_headerMetadataObserver;
    _UIActivityContentTitleView *_headerTitleView;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_closeButton;
    NSUUID *_photosCarouselUUID;
    NSArray *_airDropSlots;
    NSArray *_shareProxies;
    NSArray *_actionProxies;
    NSNumber *_nearbyCountSlotID;
    NSMutableDictionary *_peopleSlots;
    NSMutableDictionary *_shareSlots;
    NSMutableDictionary *_actionSlots;
    UIVisualEffectView *_backgroundView;
    NSUUID *_airDropUUID;
    SFAirDropMagicHeadViewController *_magicHeadViewController;
}

@property (retain, nonatomic) NSDictionary *activitiesByUUID;
@property (retain, nonatomic) NSMutableDictionary *identifierToProgress;
@property (retain, nonatomic) NSMutableDictionary *identifierToPulse;
@property (retain, nonatomic) NSMutableDictionary *identifierToSubtitle;
@property (retain, nonatomic) _UIActivityContentCollectionView *activityCollectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (retain, nonatomic) LPLinkView *headerLinkView;
@property (retain, nonatomic) LPLinkMetadataObserver *headerMetadataObserver;
@property (retain, nonatomic) _UIActivityContentTitleView *headerTitleView;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) UIBarButtonItem *closeButton;
@property (retain, nonatomic) NSUUID *photosCarouselUUID;
@property (nonatomic) _Bool photosLandscapeMode;
@property (retain, nonatomic) NSArray *airDropSlots;
@property (retain, nonatomic) NSArray *shareProxies;
@property (retain, nonatomic) NSArray *actionProxies;
@property (retain, nonatomic) NSNumber *nearbyCountSlotID;
@property (retain, nonatomic) NSMutableDictionary *peopleSlots;
@property (retain, nonatomic) NSMutableDictionary *shareSlots;
@property (retain, nonatomic) NSMutableDictionary *actionSlots;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (nonatomic) _Bool contentInstalled;
@property (retain, nonatomic) NSUUID *airDropUUID;
@property (retain, nonatomic) SFAirDropMagicHeadViewController *magicHeadViewController;
@property (nonatomic) _Bool ignorePersonTap;
@property (weak, nonatomic) id <UIActivityContentDelegate> delegate;
@property (nonatomic) _Bool configureForCloudSharing;
@property (nonatomic) _Bool configureForPhotosEdit;
@property (nonatomic) _Bool wantsObjectManipulation;
@property (nonatomic) _Bool sharingCollapsed;
@property (retain, nonatomic) UIViewController *photosCarouselViewController;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (nonatomic, readonly) LPLinkMetadata *headerMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)cancelButtonTapped;
- (void)configureHeaderViewIfNeeded;
- (void)configureCollectionViewIfNeeded;
- (void)overrideLayoutConfigurationWithSafeAreaInsets:(_Bool)arg1;
- (id)cancelBarButton;
- (id)nextBarButton;
- (void)layoutContentCollectionView:(_Bool)arg1;
- (void)closeButtonTapped;
- (id)activityCollectionViewLayout;
- (id)_activityWithActivityUUID:(id)arg1;
- (void)_editActionsTapped;
- (void)configureMagicHeadCell:(id)arg1 withProxy:(id)arg2;
- (void)nextButtonTapped;
- (void)updateHeaderMetadata;
- (void)updateHeaderSize;
- (void)updateContentWithPeopleProxies:(id)arg1 shareProxies:(id)arg2 actionProxies:(id)arg3 activitiesByUUID:(id)arg4 nearbyCountSlotID:(id)arg5 animated:(_Bool)arg6;
- (void)refreshContent;
- (void)updateProgress:(double)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(_Bool)arg5 animated:(_Bool)arg6;
- (_Bool)_presentedInFormSheet;

@end
