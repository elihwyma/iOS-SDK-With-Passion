/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/Swift-Protocol.h>

@class NSDate, NSNumber, NSString, STBlueprint, STBlueprintScheduleRepresentation;

@protocol STSerializableManagedObject;

@interface STBlueprintSchedule : NSManagedObject <Swift>

@property (retain, nonatomic) NSDate *day0Start;
@property (retain, nonatomic) NSDate *day1Start;
@property (retain, nonatomic) NSDate *day2Start;
@property (retain, nonatomic) NSDate *day3Start;
@property (retain, nonatomic) NSDate *day4Start;
@property (retain, nonatomic) NSDate *day5Start;
@property (retain, nonatomic) NSDate *day6Start;
@property (retain, nonatomic) NSDate *day0End;
@property (retain, nonatomic) NSDate *day1End;
@property (retain, nonatomic) NSDate *day2End;
@property (retain, nonatomic) NSDate *day3End;
@property (retain, nonatomic) NSDate *day4End;
@property (retain, nonatomic) NSDate *day5End;
@property (retain, nonatomic) NSDate *day6End;
@property (nonatomic, readonly) STBlueprint *blueprint;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintScheduleRepresentation *scheduleRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <STSerializableManagedObject> syncableRootObject;

+ (id)startDateKeyPaths;
+ (id)endDateKeyPaths;
+ (id)keyPathsForValuesAffectingScheduleRepresentation;

- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)setStartTime:(id)arg1 endTime:(id)arg2;
- (void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3;

@end
