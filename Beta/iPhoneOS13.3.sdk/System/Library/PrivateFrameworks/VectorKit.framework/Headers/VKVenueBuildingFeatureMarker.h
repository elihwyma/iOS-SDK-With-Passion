/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKFeatureMarker.h>

@class NSArray, NSDictionary;

@interface VKVenueBuildingFeatureMarker : VKFeatureMarker

{
    _Bool _localize;
}

@property (nonatomic, readonly) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long businessId;
@property (nonatomic, readonly) NSArray *floorOrdinals;
@property (nonatomic, readonly) NSDictionary *shortFloorNames;
@property (nonatomic, readonly) NSDictionary *floorNames;

- (id)initWithVenueBuilding:(const struct VenueBuilding *)arg1 localize:(_Bool)arg2;
- (const shared_ptr_ec62a932 *)venueBuildingFeatureMarker;
- (CDStruct_c3b9c2ee)nearestFramingPositionToLocation:(CDStruct_c3b9c2ee)arg1;

@end
