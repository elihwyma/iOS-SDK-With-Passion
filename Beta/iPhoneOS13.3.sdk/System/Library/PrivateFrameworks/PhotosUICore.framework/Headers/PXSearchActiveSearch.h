/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PXSearchActiveSearch : NSObject

{
    NSString *_searchText;
    NSArray *_searchTokens;
    NSArray *_representedObjects;
    NSString *_priorityAssetUUID;
}

@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSArray *searchTokens;
@property (retain, nonatomic) NSArray *representedObjects;
@property (retain, nonatomic) NSString *priorityAssetUUID;
@property (nonatomic, readonly) _Bool hasSearchText;
@property (nonatomic, readonly) _Bool hasSearchTokens;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) unsigned long long searchTokenCount;
@property (nonatomic, readonly) unsigned long long searchTermCount;
@property (nonatomic, readonly) NSString *searchTermsString;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSearchText:(id)arg1 searchTokens:(id)arg2;
- (void)_generateRelatedSearchObjects;

@end
