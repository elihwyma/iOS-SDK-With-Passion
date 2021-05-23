/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSURL, PHAsset, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, PHPhotosHighlight, UIActivityIndicatorView, UICollectionView, UISegmentedControl, UISwitch, UITableView, UITextField, UIView;

@protocol OS_dispatch_queue;

@interface PXHighlightDiagnosticsViewController : UIViewController <Swift>

{
    UIView *_contentView;
    UISegmentedControl *_segmentedControl;
    UICollectionView *_collectionView;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHPhotosHighlight *_sourceHighlight;
    PHCachingImageManager *_imageManager;
    struct CGSize _thumbnailSize;
    long long _thumbnailContentMode;
    PHImageRequestOptions *_thumbnailOptions;
    struct CGRect _previousPreheatRect;
    NSMutableArray *_addedAssets;
    NSMutableArray *_removedAssets;
    NSArray *_visibleAssets;
    PHFetchResult *_allAssets;
    PHFetchResult *_curationAssets;
    PHFetchResult *_summaryAssets;
    PHFetchResult *_extendedAssets;
    PHFetchResult *_dejunkAndDedupeAssets;
    PHAsset *_keyAsset;
    NSDictionary *_assetByUUID;
    NSArray *_sortedVisibleAssetUUIDs;
    NSDictionary *_curationDebugInformation;
    _Bool _curationDebugEnabled;
    _Bool _curationComparisonEnabled;
    NSObject<OS_dispatch_queue> *_curationDebugFetchQueue;
    UIView *_curationSettingsView;
    UIView *_curationTypeView;
    UIView *_itemDetailsView;
    NSMutableDictionary *_dedupedSymbolIndexByItemIdentifier;
    NSURL *_screenshotURL;
    UIActivityIndicatorView *_progressView;
    UISwitch *_doIdenticalDedupingSwitch;
    UITextField *_identicalDedupingTimeIntervalTextField;
    UITextField *_identicalDedupingTimeIntervalForPeopleTextField;
    UITextField *_identicalDedupingMaximumTimeGroupExtensionTextField;
    UITextField *_maximumNumberOfItemsPerIdenticalClusterTextField;
    UITextField *_identicalDedupingThresholdTextField;
    UITextField *_identicalDedupingThresholdForPeopleTextField;
    UITextField *_identicalDedupingThresholdForBestItemsTextField;
    UISwitch *_useFaceprintsForIdenticalDedupingSwitch;
    UITextField *_identicalDedupingFaceprintDistanceTextField;
    UISwitch *_doSemanticalDedupingSwitch;
    UITextField *_semanticalDedupingTimeIntervalTextField;
    UITextField *_semanticalDedupingTimeIntervalForPeopleTextField;
    UITextField *_semanticalDedupingTimeIntervalForPersonsTextField;
    UITextField *_semanticalDedupingMaximumTimeGroupExtensionTextField;
    UITextField *_maximumNumberOfItemsPerSemanticalClusterTextField;
    UITextField *_semanticalDedupingThresholdTextField;
    UITextField *_semanticalDedupingThresholdForPeopleTextField;
    UITextField *_semanticalDedupingThresholdForPersonsTextField;
    UISwitch *_doNotSemanticallyDedupePeopleSwitch;
    UISwitch *_doNotSemanticallyDedupePersonsSwitch;
    UISwitch *_allowAdaptiveForSemanticalDedupingSwitch;
    UISwitch *_useOnlyScenesForDedupingSwitch;
    UISwitch *_useAllPersonsForDedupingSwitch;
    UISwitch *_useFaceQualityForElectionSwitch;
    UISwitch *_doNotDedupeVideosSwitch;
    UISwitch *_doNotDedupeInterestingPortraitsAndLivePicturesSwitch;
    UISwitch *_onlyDedupeContiguousItemsSwitch;
    UISwitch *_doDejunkSwitch;
    UISwitch *_returnDedupedJunkIfOnlyJunkSwitch;
    UISwitch *_doFinalPassSwitch;
    UITextField *_finalPassTimeIntervalTextField;
    UITextField *_finalPassMaximumTimeGroupExtensionTextField;
    UITextField *_finalPassDedupingThresholdTextField;
    _Bool _initiallyShowCuration;
    _Bool _shouldPresentTapToRadar;
    long long _currentCurationType;
    NSString *_hostLayoutDiagnosticDescription;
    NSString *_hostViewDiagnosticDescription;
}

@property (nonatomic) _Bool initiallyShowCuration;
@property (nonatomic) long long currentCurationType;
@property (nonatomic) _Bool shouldPresentTapToRadar;
@property (copy, nonatomic) NSString *hostLayoutDiagnosticDescription;
@property (copy, nonatomic) NSString *hostViewDiagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)options;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)_resetSettings:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)_closeAction:(id)arg1;
- (id)initWithHighlight:(id)arg1;
- (void)showToolbarItems;
- (void)hideToolbarItems;
- (void)settingsWasTapped:(id)arg1;
- (void)toggleCurationComparison:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)presentTapToRadarIfNeeded;
- (void)_editSettings:(id)arg1;
- (void)_applySettingsGlobally:(id)arg1;
- (void)_doneEditingSettings:(id)arg1;
- (void)_updateCachedAssets;
- (void)_enumerateDifferencesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_updateUIElementsVisibility;
- (id)_tapToRadarViewControllerWithScreenshot:(_Bool)arg1;
- (void)_tapToRadar:(id)arg1;
- (void)displayCurrentCurationType;
- (void)reloadCuration;
- (id)assetsForCurationType:(long long)arg1;
- (void)changeCurationType:(id)arg1;
- (void)addAssetUUIDsTo:(id)arg1 from:(id)arg2;
- (void)showCurationSettings:(id)arg1;
- (void)hideCurationSettings:(id)arg1;
- (void)showItemDetailsWithDebugInfo:(id)arg1;
- (void)hideItemDetails:(id)arg1;
- (void)changeCurationDebugEnabled:(id)arg1;
- (id)_curationTypeKeys;
- (id)curationDebugInformationForCurationType:(long long)arg1;
- (id)_fullCurationDebugInformation;
- (void)_requestHighlightCurationDebugInfoWithOptions:(id)arg1 setGlobally:(_Bool)arg2;

@end
