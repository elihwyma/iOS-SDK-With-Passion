/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInputClue.h>

@class NSArray, NSDate, NSSet;

@interface CLSInputTimeClue : CLSInputClue

{
    NSArray *_dateComponentsArray;
    NSArray *_events;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
}

@property (copy, nonatomic) NSArray *events;

+ (id)clueWithDates:(id)arg1;

- (id)description;
- (double)timeInterval;
- (id)localStartDate;
- (id)localEndDate;
- (id)universalDates;
- (id)universalStartDate;
- (id)universalEndDate;
- (_Bool)isEqualToClue:(id)arg1;
- (id)localDates;
- (unsigned long long)numberOfDays;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_computeDateProperties;

@end
