/*
 Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_os_log;

@interface PowerUIBatteryMitigationManager : NSObject

{
    int _lastDOD0Value;
    unsigned long long _decisionSignalID;
    NSObject<OS_os_log> *_log;
    NSString *_defaultsDomain;
    NSDate *_lastDOD0Update;
    unsigned long long _lastQMaxCounter;
    NSDate *_lastQMaxUpdate;
    unsigned long long _testDaysSinceQmaxUpdate;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (nonatomic) int lastDOD0Value;
@property (retain) NSDate *lastDOD0Update;
@property (nonatomic) unsigned long long lastQMaxCounter;
@property (retain) NSDate *lastQMaxUpdate;
@property unsigned long long decisionSignalID;
@property (nonatomic) unsigned long long testDaysSinceQmaxUpdate;

- (id)dod0ValueChangedDate;
- (int)lastQMaxCounterValue;
- (id)lastQMaxCounterChangedDate;
- (void)updateLastQMaxValue:(unsigned long long)arg1 atDate:(id)arg2;
- (double)additionalWaitTimeForQMaxWithInterval:(double)arg1;
- (void)updateLastDOD0Value:(int)arg1 atDate:(id)arg2;
- (double)additionalWaitTimeForDOD0WithInterval:(double)arg1;
- (id)initWithDefaultsDomain:(id)arg1;
- (double)additionalWaitTime;

@end
