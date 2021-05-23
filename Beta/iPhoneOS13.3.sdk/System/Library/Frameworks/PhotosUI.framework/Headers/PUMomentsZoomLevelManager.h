/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PUCollectionViewIntermediateDataSource, PUSessionInfo, PUZoomableGridViewControllerSpec, PXPhotosDataSource;

@interface PUMomentsZoomLevelManager : NSObject

{
    NSMutableArray *_allLevelInfos;
    PXPhotosDataSource *_momentsDataSource;
    _Bool _isInvalidatingLayoutOfZoomLevels;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
    PUSessionInfo *_sessionInfo;
    PUCollectionViewIntermediateDataSource *_sharedIntermediateDataSource;
}

@property (nonatomic, readonly) PUZoomableGridViewControllerSpec *zoomableGridSpec;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) unsigned long long lowestZoomLevel;
@property (nonatomic, readonly) unsigned long long highestZoomLevel;
@property (nonatomic, readonly) unsigned long long preferredDefaultZoomLevel;
@property (nonatomic, readonly) PUCollectionViewIntermediateDataSource *sharedIntermediateDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (id)momentsDataSource;
- (unsigned long long)zoomLevelAboveZoomLevel:(unsigned long long)arg1;
- (unsigned long long)zoomLevelBelowZoomLevel:(unsigned long long)arg1;
- (_Bool)zoomLevel:(unsigned long long)arg1 isHigherThanZoomLevel:(unsigned long long)arg2;
- (id)zoomLevelInfoForZoomLevel:(unsigned long long)arg1;
- (void)_updateSummarizeSectionsOnZoomLevelInfos;
- (void)updateZoomableGridSpecForTraitCollection:(id)arg1 referenceSize:(struct CGSize)arg2;
- (id)newViewControllerForZoomLevel:(unsigned long long)arg1;
- (id)existingViewControllerForZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2;
- (id)jumpToZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 usingTopControllerConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)markZoomInfosInvalidWithWidth:(double)arg1;
- (void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2;
- (void)_defaultsDidChange:(id)arg1;

@end
