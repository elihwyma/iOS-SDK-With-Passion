/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeatureVectorGenerator.h>

@class CLSHolidayCalendarEventService;

@interface PGFeatureVectorUpcomingFutureGenerator : PGFeatureVectorGenerator

{
    CLSHolidayCalendarEventService *_holidayService;
}

@property (retain, nonatomic) CLSHolidayCalendarEventService *holidayService;

- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_enumerateHolidayFeatureVectorsFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_enumeratePeopleEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_enumerateCalendarEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
