/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDRelatedPlace, NSArray;

@interface GEORelatedPlaceList : NSObject

{
    GEOPDRelatedPlace *_relatedPlace;
}

@property (nonatomic, readonly) NSArray *mapIdentifiers;
@property (nonatomic, readonly) int type;

- (id)initWithRelatedPlace:(id)arg1;

@end
