/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPMockRTRoutineManager : NSObject

+ (void)initialize;
+ (id)defaultManager;
+ (void)setMockLocationsOfInterest:(id)arg1;

- (id)init;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;

@end
