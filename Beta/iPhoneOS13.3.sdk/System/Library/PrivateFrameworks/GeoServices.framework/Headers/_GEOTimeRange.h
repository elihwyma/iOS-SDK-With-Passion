/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTimeRange : NSObject

{
    struct GEOPBTransitTimeRange _pbTimeRange;
    struct GEOPDTimeRange _pdTimeRange;
    _Bool _usePB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (_Bool)contains:(id)arg1;
- (id)initWithPDTimeRange:(struct GEOPDTimeRange)arg1;
- (id)initWithPBTimeRange:(struct GEOPBTransitTimeRange)arg1;

@end
