/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface CLKUIAlmanacTransitInfo : NSObject

{
    NSDate *_day;
    long long _constantSun;
    NSDate *_rise;
    NSDate *_solarNoon;
    NSDate *_set;
    NSArray *_solarMidnights;
    CDStruct_2c43369c _location;
}

@property (retain, nonatomic) NSDate *day;
@property (nonatomic) CDStruct_2c43369c location;
@property (nonatomic) long long constantSun;
@property (retain, nonatomic) NSDate *rise;
@property (retain, nonatomic) NSDate *solarNoon;
@property (retain, nonatomic) NSDate *set;
@property (retain, nonatomic) NSArray *solarMidnights;

+ (id)transitInfoForDate:(id)arg1;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;

- (id)description;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
- (id)initWithDate:(id)arg1 city:(id)arg2;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;

@end
