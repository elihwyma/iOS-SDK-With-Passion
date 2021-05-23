/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@interface PLManagedLegacyFaceAlbum : PLManagedAlbum

@property (nonatomic) short keyAssetFaceIdentifier;
@property (nonatomic) int keyAssetFaceThumbnailIndex;

+ (id)entityName;

@end
