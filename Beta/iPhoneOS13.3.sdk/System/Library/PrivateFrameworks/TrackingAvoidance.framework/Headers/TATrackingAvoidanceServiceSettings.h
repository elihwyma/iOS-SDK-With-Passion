/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TATrackingAvoidanceServiceSettings : NSObject

{
    _Bool _enableTAFilterGeneral;
    _Bool _enableTAFilterVisits;
    _Bool _enableTAFilterSingleVisit;
    double _classificationTimeInterval;
}

@property (nonatomic, readonly) _Bool enableTAFilterGeneral;
@property (nonatomic, readonly) _Bool enableTAFilterVisits;
@property (nonatomic, readonly) _Bool enableTAFilterSingleVisit;
@property (nonatomic, readonly) double classificationTimeInterval;

- (id)initWithDefaults;
- (id)initWithEnableTAFilterGeneral:(_Bool)arg1 enableTAFilterVisits:(_Bool)arg2 enableTAFilterSingleVisit:(_Bool)arg3 classificationTimeInterval:(double)arg4;
- (id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4;

@end
