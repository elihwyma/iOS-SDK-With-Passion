/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAlbumsGadgetProvider, PUSessionInfo, PXExtendedTraitCollection, PXPhotoKitCollectionsDataSourceManager;

@interface PUHorizontalAlbumListGadgetProvider : PXHorizontalCollectionGadgetProvider <Swift>

{
    NSString *_title;
    PUSessionInfo *_sessionInfo;
    unsigned long long _type;
    PXExtendedTraitCollection *_traitCollection;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUAlbumsGadgetProvider *_albumsGadgetProvider;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PUAlbumsGadgetProvider *albumsGadgetProvider;
@property (readonly) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)title;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)_handleDataSourceChange;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 sessionInfo:(id)arg3;
- (id)_newConfiguration;
- (_Bool)_canProvideGadgets;
- (id)_peoplePlacesAndMediaTypesConfiguration;
- (id)_fromMyMacConfiguration;
- (id)_seeAllViewController;

@end
