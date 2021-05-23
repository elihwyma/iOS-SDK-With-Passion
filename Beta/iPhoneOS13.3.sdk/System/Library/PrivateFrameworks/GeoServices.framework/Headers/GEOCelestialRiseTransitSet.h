/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEOCelestialRiseTransitSet : NSObject

{
    double _julianDay;
    struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
}

@property (nonatomic, readonly) double julianDay;
@property (nonatomic, readonly) struct CAARiseTransitSetDetails riseTransitSet;
@property (nonatomic, readonly) _Bool isTransitAboveHorizon;
@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *transit;
@property (nonatomic, readonly) NSDate *set;

- (id)description;
- (id).cxx_construct;
- (id)_dateFromOffset:(double)arg1;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;
- (int)_numberOfEvents;
- (double)_oldestEventInJulianDay;

@end
