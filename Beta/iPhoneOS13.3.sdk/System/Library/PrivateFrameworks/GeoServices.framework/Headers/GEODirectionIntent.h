/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject

{
    GEOResolvedItem *_origin;
    GEOResolvedItem *_destination;
    int _transportType;
}

@property (nonatomic, readonly) GEOResolvedItem *origin;
@property (nonatomic, readonly) GEOResolvedItem *destination;
@property (nonatomic, readonly) int transportType;

- (id)initWithDirectionIntent:(id)arg1;

@end
