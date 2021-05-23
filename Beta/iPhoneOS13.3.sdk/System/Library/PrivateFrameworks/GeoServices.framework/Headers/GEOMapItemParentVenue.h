/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOMapItemParentVenue : NSObject

{
    unsigned long long _businessID;
    int _featureType;
}

@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) int featureType;

- (id)init;
- (id)initWithLocatedInsideInfo:(id)arg1;
- (id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2;

@end
