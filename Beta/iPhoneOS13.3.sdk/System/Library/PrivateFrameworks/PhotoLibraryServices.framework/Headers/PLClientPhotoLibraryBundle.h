/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle

- (void)close;
- (id)newAssetsdClient;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (id)newBoundAssetsdServicesTable;

@end
