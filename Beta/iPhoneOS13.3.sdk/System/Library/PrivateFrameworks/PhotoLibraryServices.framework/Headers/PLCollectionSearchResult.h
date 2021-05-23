/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSDate, NSString, PSICollectionResult, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult

{
    PSICollectionResult *_collectionResult;
}

@property (nonatomic, readonly) PSICollectionResult *collectionResult;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDate *sortDate;
@property (nonatomic, readonly) PSIDate *startDate;
@property (nonatomic, readonly) PSIDate *endDate;
@property (nonatomic, readonly) unsigned long long collectionType;

- (unsigned long long)type;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;
- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2;

@end
