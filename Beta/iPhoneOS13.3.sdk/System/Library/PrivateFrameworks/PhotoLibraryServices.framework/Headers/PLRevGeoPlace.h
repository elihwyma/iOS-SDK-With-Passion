/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLRevGeoPlace : NSObject

{
    NSDictionary *_placeInfosForOrderType;
}

@property (nonatomic, readonly) NSDictionary *placeInfosForOrderType;

+ (_Bool)supportsSecureCoding;
+ (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long *)arg3 outPreviousOrderType:(unsigned long long *)arg4;
+ (id)placeWithMapItem:(id)arg1 placeAnnotation:(id)arg2;
+ (unsigned long long)_dominantOrderTypeForPlaceType:(id)arg1 lastOrderType:(unsigned long long)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceInfosForOrderType:(id)arg1;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;

@end
