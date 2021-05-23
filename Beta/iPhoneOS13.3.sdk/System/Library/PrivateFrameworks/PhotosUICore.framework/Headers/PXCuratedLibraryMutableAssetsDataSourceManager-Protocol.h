/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@class NSPredicate;

@protocol PXCuratedLibraryMutableAssetsDataSourceManager

@property (nonatomic) long long zoomLevel;
@property (copy, nonatomic) NSPredicate *allPhotosFilterPredicate;

- (unsigned short)loadIfNeeded;
- (unsigned short)forceAccurateAllSectionsIfNeeded;
- (unsigned short)forceAccurateSectionsIfNeeded: /* Error: Ran out of types for this method. */;
- (unsigned short)forceAccurateSection:andSectionsBeforeAndAfter: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseChangeDeliveryWithTimeout: /* Error: Ran out of types for this method. */;
- (unsigned short)forceAccurateSectionsIfNeeded:inZoomLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)setTransientKeyAsset:forAssetCollection:zoomLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeChangeDelivery: /* Error: Ran out of types for this method. */;

@end
