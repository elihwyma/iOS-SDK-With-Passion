/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXCPLServiceUI, PXCloudQuotaController, PXPhotoKitAssetsDataSourceManager;

@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <Swift>

{
    NSArray *_syncProgressAlbums;
    id <PXPhotosLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
    PXPhotoKitAssetsDataSourceManager *_assetsDataSourceManager;
    PXCPLServiceUI *_cplServiceUI;
    PXCloudQuotaController *_cloudQuotaController;
}

@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, readonly) NSArray *syncProgressAlbums;
@property (retain, nonatomic) PXCPLServiceUI *cplServiceUI;
@property (retain, nonatomic) PXCloudQuotaController *cloudQuotaController;
@property (weak, nonatomic) id <PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)serviceUI:(id)arg1 progressDidChange:(float)arg2;
- (_Bool)serviceUI:(id)arg1 performAction:(long long)arg2;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)cloudQuotaController:(id)arg1 presentInformationBanner:(id)arg2;
- (struct NSObject *)presentingViewControllerForCloudQuotaController:(id)arg1;
- (void)_updateExposedProperties;

@end
