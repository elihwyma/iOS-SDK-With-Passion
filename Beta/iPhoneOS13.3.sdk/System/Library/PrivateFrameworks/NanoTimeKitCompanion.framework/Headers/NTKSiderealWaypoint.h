/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKSiderealWaypoint : NSObject

{
    double _degree;
    long long _type;
}

@property (nonatomic) double degree;
@property (nonatomic) long long type;

+ (long long)_waypointTypeFromSolarEventType:(long long)arg1;
+ (id)waypointWithType:(long long)arg1 degree:(double)arg2;
+ (id)waypointFromSolarEvent:(id)arg1;

- (id)description;
- (id)debugDescription;
- (id)localizedName;
- (id)initWithType:(long long)arg1 degree:(double)arg2;

@end
