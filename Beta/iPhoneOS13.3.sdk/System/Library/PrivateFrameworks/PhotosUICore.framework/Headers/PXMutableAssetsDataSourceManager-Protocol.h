/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXMutableAssetsDataSourceManager <Swift>

@property (nonatomic) long long backgroundFetchOriginSection;

- (unsigned short)setCurationEnabled:forAssetCollection: /* Error: Ran out of types for this method. */;
- (unsigned short)forceAccurateAllSectionsIfNeeded;
- (unsigned short)forceAccurateSectionsIfNeeded: /* Error: Ran out of types for this method. */;
- (unsigned short)forceAccurateSection:andSectionsBeforeAndAfter: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseChangeDeliveryWithTimeout: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeChangeDeliveryAndBackgroundLoading: /* Error: Ran out of types for this method. */;
- (unsigned short)startBackgroundFetchIfNeeded;

@end
