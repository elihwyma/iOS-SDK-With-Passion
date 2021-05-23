/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSArray, NSDate;

@interface PLAssetSearchResult : PLSearchResult

{
    NSDate *_sortDate;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSDate *sortDate;

- (unsigned long long)type;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;

@end
