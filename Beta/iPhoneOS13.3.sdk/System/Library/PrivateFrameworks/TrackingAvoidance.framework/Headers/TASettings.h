/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class TAFilterGeneralSettings, TAFilterSingleVisitSettings, TAFilterVisitsSettings, TAScanRequestSettings, TAStoreSettings, TATrackingAvoidanceServiceSettings;

@interface TASettings : NSObject

{
    _Bool _trackingAvoidanceEnabled;
    _Bool _peopleDensityEnabled;
    TAFilterGeneralSettings *_filterGeneralSettings;
    TAFilterVisitsSettings *_filterVisitsSettings;
    TAFilterSingleVisitSettings *_filterSingleVisitSettings;
    TAStoreSettings *_storeSettings;
    TAScanRequestSettings *_scanRequestSettings;
    TATrackingAvoidanceServiceSettings *_serviceSettings;
}

@property (nonatomic) _Bool trackingAvoidanceEnabled;
@property (nonatomic) _Bool peopleDensityEnabled;
@property (retain, nonatomic) TAFilterGeneralSettings *filterGeneralSettings;
@property (retain, nonatomic) TAFilterVisitsSettings *filterVisitsSettings;
@property (retain, nonatomic) TAFilterSingleVisitSettings *filterSingleVisitSettings;
@property (retain, nonatomic) TAStoreSettings *storeSettings;
@property (retain, nonatomic) TAScanRequestSettings *scanRequestSettings;
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings;

+ (id)convertEnabledLoiTypesValueContentToNSNumberType:(id)arg1;
+ (id)getBooleanSettingsKeys;
+ (id)getIntegerSettingsKeys;
+ (id)getUnsignedIntegerSettingsKeys;
+ (id)getDoubleSettingsKeys;
+ (id)getStringSettingsKeys;
+ (id)getArraySettingsKeys;

- (id)init;
- (id)description;
- (id)initWithSettings:(id)arg1;
- (void)setSettings:(id)arg1;

@end
