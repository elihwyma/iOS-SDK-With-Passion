/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAssetSearchResult.h>

@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult

{
    unsigned long long _assetCount;
    NSArray *_assetUUIDs;
    _Bool _resultsCanOverlap;
    NSMutableArray *_assetSearchResults;
}

@property (retain, nonatomic) NSMutableArray *assetSearchResults;
@property (nonatomic) _Bool resultsCanOverlap;
@property (nonatomic, readonly) NSArray *groupResults;

- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (id)initWithAssetSearchResults:(id)arg1 canOverlap:(_Bool)arg2;
- (id)initWithAssetSearchResult:(id)arg1;
- (void)addAssetSearchResult:(id)arg1 isMainSearchResult:(_Bool)arg2;
- (unsigned long long)categoryMask;
- (id)groupDescription;

@end
