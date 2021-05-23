/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOCelestialRiseTransitSet, NSDate;

__attribute__((visibility("hidden")))
@interface GEOAlmanacRiseTransitSet : NSObject

{
    GEOCelestialRiseTransitSet *_celestialRiseTransitSet;
    unsigned long long _firstEventType;
    unsigned long long _lastEventType;
}

@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *transit;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) struct CAARiseTransitSetDetails riseTransitSet;
@property (nonatomic, readonly) unsigned long long firstEventType;
@property (nonatomic, readonly) unsigned long long lastEventType;
@property (nonatomic, readonly) NSDate *firstEventDate;
@property (nonatomic, readonly) NSDate *lastEventDate;

- (id)description;
- (void)_calculateFirstAndLastEvents;
- (id)initWith:(id)arg1;
- (long long)compareToDate:(id)arg1;
- (_Bool)isCompatibleWith:(id)arg1;

@end
