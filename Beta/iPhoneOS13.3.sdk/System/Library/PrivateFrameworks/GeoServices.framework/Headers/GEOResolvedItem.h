/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject

{
    GEOPDResolvedItem *_resolvedItem;
}

@property (nonatomic, readonly) _Bool hasResultIndex;
@property (nonatomic, readonly) unsigned long long resultIndex;
@property (nonatomic, readonly) NSString *extractedTerm;
@property (nonatomic, readonly) int itemType;

- (id)initWithResolvedItem:(id)arg1;
- (id)initWithAutocompleteResolvedItem:(id)arg1;

@end
