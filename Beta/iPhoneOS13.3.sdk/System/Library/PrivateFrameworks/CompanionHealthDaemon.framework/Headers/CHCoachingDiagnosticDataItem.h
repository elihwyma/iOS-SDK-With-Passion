/*
 Image: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
 */

#import <NSObject.h>

@interface CHCoachingDiagnosticDataItem : NSObject

{
    double _walking;
    double _automotive;
    double _cycling;
    double _running;
    double _other;
    double _unknown;
    double _workout;
    double _heartRate;
    double _activeCalories;
    double _briskMinutes;
}

@property (nonatomic) double walking;
@property (nonatomic) double automotive;
@property (nonatomic) double cycling;
@property (nonatomic) double running;
@property (nonatomic) double other;
@property (nonatomic) double unknown;
@property (nonatomic) double workout;
@property (nonatomic) double heartRate;
@property (nonatomic) double activeCalories;
@property (nonatomic) double briskMinutes;

- (id)description;

@end
