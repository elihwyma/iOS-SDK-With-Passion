/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, PHAsset, PHPerson, PUActivitySharingViewModel, PUActivityViewController, PUCarouselSharingViewController, PXSelectionSnapshot, UIActivityViewController;

@protocol PXActivitySharingControllerDelegate, PXActivityViewController;

__attribute__((visibility("hidden")))
@interface PUActivitySharingController : NSObject <Swift>

{
    _Bool _activityViewControllerWasCreated;
    _Bool _allowAirPlayActivity;
    _Bool _excludeShareActivity;
    id <PXActivitySharingControllerDelegate> _delegate;
    PUActivitySharingViewModel *_viewModel;
    NSDictionary *_assetsFetchResultsByAssetCollection;
    PHPerson *_person;
    NSArray *_excludedActivityTypes;
    NSArray *_activities;
    const struct __CFString *_aggregateKey;
    PUCarouselSharingViewController *_carouselViewController;
    PUActivityViewController *_internalActivityViewController;
}

@property (retain, nonatomic) PUActivitySharingViewModel *viewModel;
@property (copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection;
@property (nonatomic) _Bool allowAirPlayActivity;
@property (retain, nonatomic) PHPerson *person;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (copy, nonatomic) NSArray *activities;
@property (nonatomic) const struct __CFString *aggregateKey;
@property (retain, nonatomic) PUCarouselSharingViewController *carouselViewController;
@property (nonatomic, readonly) _Bool excludeShareActivity;
@property (weak, nonatomic) PUActivityViewController *internalActivityViewController;
@property (weak, nonatomic) id <PXActivitySharingControllerDelegate> delegate;
@property (nonatomic, readonly) UIActivityViewController<PXActivityViewController> *activityViewController;
@property (nonatomic, readonly) PHAsset *currentAsset;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, readonly) NSDictionary *selectedAssetsByAssetCollection;
@property (nonatomic, readonly) NSArray *selectedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)new;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)_cancel;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)photosDataSource;
- (void)carouselSharingViewController:(id)arg1 addAssetItem:(id)arg2;
- (void)carouselSharingViewController:(id)arg1 removeAssetItem:(id)arg2;
- (void)carouselSharingViewController:(id)arg1 setAssetItems:(id)arg2;
- (void)carouselSharingViewController:(id)arg1 replaceAssetItem:(id)arg2 withAssetItem:(id)arg3;
- (_Bool)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)activityViewControllerWillDisappear:(id)arg1;
- (id)initWithActivitySharingConfiguration:(id)arg1;
- (void)_createCarouselSharingViewControllerIfNeeded;
- (id)activityViewControllerIfAvailable;
- (id)_createActivityViewControllerWithActivities:(id)arg1;
- (void)_updateExcludedActivityTypes;
- (void)_activityViewControllerDidCompleteWithActivityType:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_incrementShareCountForSelectedAssets;
- (void)_activitySharingControllerWillDismissActivityViewController;
- (void)_updateActionSheetPresentationStyleIfNeeded;
- (void)_updateSelectedAssetIdentifiers;

@end
