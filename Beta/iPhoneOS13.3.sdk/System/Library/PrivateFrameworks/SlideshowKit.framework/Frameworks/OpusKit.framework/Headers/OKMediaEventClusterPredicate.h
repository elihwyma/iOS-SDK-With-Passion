/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSDictionary, NSString;

@interface OKMediaEventClusterPredicate : OKMediaClusterPredicate

{
    unsigned long long _type;
    NSString *_countryName;
    NSDictionary *_calendarEventsDictionary;
}

@property (retain) NSString *countryName;
@property (retain) NSDictionary *calendarEventsDictionary;
@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)title;
- (id)initWithType:(unsigned long long)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (float)efficiencyForItems:(id)arg1;
- (id)eventNameForDate:(id)arg1;
- (double)maximumDistanceBetweenLocations:(id)arg1;
- (double)floatingAverageTimeDeltaForItem:(id)arg1 inArray:(id)arg2;
- (id)barycenterOfLocations:(id)arg1;
- (double)floatingAverageDistanceDeltaForItem:(id)arg1 inArray:(id)arg2;
- (id)clusterDateStringForPeriodFrom:(id)arg1 to:(id)arg2;
- (id)clusterLocationStringForLocations:(id)arg1;

@end
