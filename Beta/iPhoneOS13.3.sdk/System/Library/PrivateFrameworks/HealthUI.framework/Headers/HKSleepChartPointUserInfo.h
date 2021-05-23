/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

#import <HealthUI/Swift-Protocol.h>

@class HKSleepDay, NSArray, NSDate, NSString;

@interface HKSleepChartPointUserInfo : NSObject <Swift>

{
    NSArray *_titles;
    NSArray *_values;
    NSDate *_date;
    HKSleepDay *_sleepDay;
}

@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSArray *values;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, readonly) long long numberOfColumns;
@property (retain, nonatomic) HKSleepDay *sleepDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
