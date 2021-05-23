/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCombinedAssetSearchResult.h>

@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult

{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

- (id)contentStrings;
- (id)matchRanges;
- (unsigned long long)matchCount;
- (id)initWithName:(id)arg1 assetSearchResults:(id)arg2 canOverlap:(_Bool)arg3;
- (_Bool)hasSpecialName;

@end
