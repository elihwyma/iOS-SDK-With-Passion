/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class HKWorkout, HKWorkoutDurationNumberFormatter, NSDateComponentsFormatter;

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection

{
    HKWorkout *_workout;
    NSDateComponentsFormatter *_dateFormatter;
    HKWorkoutDurationNumberFormatter *_durationFormatter;
}

@property (retain, nonatomic) HKWorkout *workout;
@property (retain, nonatomic) NSDateComponentsFormatter *dateFormatter;
@property (retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter;

- (id)sectionTitle;
- (id)initWithSample:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;

@end
