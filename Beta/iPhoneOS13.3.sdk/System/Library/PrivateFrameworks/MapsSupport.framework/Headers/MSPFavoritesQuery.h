/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/NewMSPQuery.h>

@class NSArray;

@interface MSPFavoritesQuery : NewMSPQuery

@property (readonly) NSArray *contents;

- (_Bool)isObject:(id)arg1 equalTo:(id)arg2;
- (id)favoriteForFavorite:(id)arg1;

@end
