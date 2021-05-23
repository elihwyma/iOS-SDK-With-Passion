/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAlbumListCellContentViewHelper, PXExtendedTraitCollection, PXPhotoKitCollectionsDataSourceManager;

@interface PUAlbumsGadgetProvider : PXGadgetProvider <Swift>

{
    _Bool _hasGeneratedGadgets;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUAlbumListCellContentViewHelper *_contentViewHelper;
    unsigned long long _albumListType;
    PXExtendedTraitCollection *_extendedTraitCollection;
    unsigned long long _currentDataSourceIdentifier;
}

@property (nonatomic) unsigned long long currentDataSourceIdentifier;
@property (retain, nonatomic) PUAlbumListCellContentViewHelper *contentViewHelper;
@property (nonatomic) _Bool hasGeneratedGadgets;
@property (nonatomic, readonly) unsigned long long albumListType;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) _Bool shouldShowSeeAllAccessoryButton;
@property (nonatomic, readonly) NSString *seeAllAccessoryButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)albumListCellContentViewHelperForLayout:(id)arg1;
- (id)albumListCellContentViewHelperForAlbum:(id)arg1;
- (id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;
- (id)gadgetForIndexPath:(id)arg1;
- (id)gadgetForCollection:(id)arg1;
- (void)_reconfigureGadgets;
- (id)_newGadgetForCollection:(id)arg1;
- (Class)_albumGadgetClassForCollection:(id)arg1;
- (void)_updateDataSourceWithChangeDetails:(id)arg1;

@end
