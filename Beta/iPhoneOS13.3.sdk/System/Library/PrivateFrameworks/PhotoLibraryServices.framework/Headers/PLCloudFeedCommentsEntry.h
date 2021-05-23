/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSString *entryCloudAssetGUID;
@property (retain, nonatomic) NSOrderedSet *entryLikeComments;
@property (retain, nonatomic) NSOrderedSet *entryComments;
@property (weak, nonatomic, readonly) NSMutableOrderedSet *mutableEntryLikeComments;
@property (weak, nonatomic, readonly) NSMutableOrderedSet *mutableEntryComments;

+ (id)entityName;

- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
