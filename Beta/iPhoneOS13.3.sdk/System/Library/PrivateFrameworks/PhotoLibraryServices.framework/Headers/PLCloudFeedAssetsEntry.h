/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSMutableOrderedSet, NSOrderedSet;

@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSOrderedSet *entryAssets;
@property (weak, nonatomic, readonly) NSMutableOrderedSet *mutableEntryAssets;

+ (id)entityName;

- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
