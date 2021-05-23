/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject

{
    long long _type;
    NSDate *_waypointDate;
    NSString *_localizedName;
    NTKSolarTimeModel *_solarTimeModel;
    double _percentageThroughPeriodForWaypointDate;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NTKSolarTimeModel *solarTimeModel;
@property (nonatomic, readonly) NSDate *waypointDate;
@property (nonatomic, readonly) double percentageThroughPeriodForWaypointDate;
@property (nonatomic, readonly) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)ntkCacheableKey;
- (id)initWithType:(long long)arg1 solarTimeModel:(id)arg2;
- (void)updateDependentValues;
- (void)updateDependentValuesWithPlaceholderData;

@end
