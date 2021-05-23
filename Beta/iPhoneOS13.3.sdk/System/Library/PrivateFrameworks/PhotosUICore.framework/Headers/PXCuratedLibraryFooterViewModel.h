/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXCPLServiceUI, PXCloudQuotaController, PXCuratedLibraryAnalysisStatus, PXCuratedLibraryItemCountsController, PXFooterSettings;

@protocol PXCuratedLibraryFooterViewModelPresentationDelegate;

@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <Swift>

{
    PXCPLServiceUI *_cplServiceUI;
    PXCloudQuotaController *_cloudQuotaController;
    long long _animatedGridCycleIndex;
    _Bool _hasImportantInformation;
    _Bool _isFooterShown;
    NSArray *_syncProgressAlbums;
    id <PXCuratedLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
    long long _mode;
    PXCuratedLibraryAnalysisStatus *_analysisStatus;
    PXCuratedLibraryItemCountsController *_itemCountsController;
    PXFooterSettings *_settings;
}

@property (nonatomic, readonly) PXCuratedLibraryItemCountsController *itemCountsController;
@property (nonatomic, readonly) NSArray *syncProgressAlbums;
@property (nonatomic, readonly) PXFooterSettings *settings;
@property (nonatomic) _Bool isFooterShown;
@property (nonatomic, readonly) _Bool shouldAlternateTitleWithAnimatedGridCycle;
@property (weak, nonatomic) id <PXCuratedLibraryFooterViewModelPresentationDelegate> presentingDelegate;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) _Bool hasImportantInformation;
@property (nonatomic, readonly) PXCloudQuotaController *cloudQuotaController;
@property (nonatomic, readonly) PXCuratedLibraryAnalysisStatus *analysisStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasCPLStatusForServiceStatus:(id)arg1 serviceUIStatus:(id)arg2;
+ (_Bool)hasAnalysisProgressForMode:(long long)arg1 analysisStatus:(id)arg2 serviceStatus:(id)arg3 serviceUIStatus:(id)arg4 userDefaults:(id)arg5 outAnimatedIconMode:(long long *)arg6 outProgress:(float *)arg7 outTitle:(id *)arg8 outDescription:(id *)arg9;
+ (id)_titleWithOptionalDescription:(id *)arg1 progress:(float *)arg2 forMode:(long long)arg3 itemCountsController:(id)arg4 analysisStatus:(id)arg5 serviceStatus:(id)arg6 inRebuild:(_Bool)arg7;
+ (_Bool)_hasSyncProgressStatusForSyncAlbums:(id)arg1 outImportOperations:(int *)arg2;

- (id)init;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)footerAnimationCrossedGridCycleBoundary;
- (void)cloudQuotaController:(id)arg1 presentInformationBanner:(id)arg2;
- (struct NSObject *)presentingViewControllerForCloudQuotaController:(id)arg1;
- (id)initWithItemCountsController:(id)arg1 cplServiceUI:(id)arg2 analysisStatus:(id)arg3 mode:(long long)arg4;
- (void)setHasImportantInformation:(_Bool)arg1;
- (void)didShowFooter;
- (void)didHideFooter;
- (void)_updateHasImportantInformation;
- (void)_updateExposedProperties;

@end
