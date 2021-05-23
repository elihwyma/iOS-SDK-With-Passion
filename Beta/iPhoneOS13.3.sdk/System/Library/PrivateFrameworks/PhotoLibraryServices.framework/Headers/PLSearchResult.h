/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PSIGroupResult;

@interface PLSearchResult : NSObject

{
    PSIGroupResult *_groupResult;
}

@property (nonatomic, readonly) PSIGroupResult *groupResult;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long categoryMask;
@property (nonatomic, readonly) NSArray *searchTokens;
@property (nonatomic, readonly) NSArray *contentStrings;
@property (nonatomic, readonly) NSArray *lookupIdentifiers;
@property (nonatomic, readonly) NSArray *matchRanges;
@property (nonatomic, readonly) NSString *transientToken;
@property (nonatomic, readonly) NSString *keyAssetUUID;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSString *groupDescription;
@property (readonly) NSString *owningContentString;

- (long long)categoryAtIndex:(long long)arg1;
- (id)initWithGroupResult:(id)arg1;
- (unsigned long long)groupCount;
- (id)tokensAtIndex:(long long)arg1;
- (id)matchRangesAtIndex:(long long)arg1;
- (_Bool)isContentStringTextSearchableAtIndex:(long long)arg1;
- (_Bool)isMatchedByIdentifierAtIndex:(long long)arg1;
- (_Bool)isImplicitlyTokenized;

@end
