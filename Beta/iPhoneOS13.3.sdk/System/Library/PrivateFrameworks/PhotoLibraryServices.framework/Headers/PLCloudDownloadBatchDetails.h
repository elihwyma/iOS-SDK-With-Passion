/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface PLCloudDownloadBatchDetails : NSObject

{
    _Bool _hasResourceChanges;
    long long _numberOfPhotos;
    long long _numberOfVideos;
    NSArray *_cmmUUIDsToNotify;
    NSArray *_flippedPlaceholderAssetUUIDs;
    NSSet *_confirmedResourceIDs;
}

@property (nonatomic) _Bool hasResourceChanges;
@property (nonatomic) long long numberOfPhotos;
@property (nonatomic) long long numberOfVideos;
@property (copy, nonatomic) NSArray *cmmUUIDsToNotify;
@property (copy, nonatomic) NSArray *flippedPlaceholderAssetUUIDs;
@property (copy, nonatomic) NSSet *confirmedResourceIDs;

- (void)unionBatchDetails:(id)arg1;

@end
