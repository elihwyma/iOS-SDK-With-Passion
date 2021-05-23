/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface HKSleepDataProviderCurrentValue : NSObject

{
    NSNumber *_timeIntervalSlept;
    NSDate *_date;
    long long _categoryValue;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic, readonly) long long categoryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dataProviderValueWithSleepQueryResult:(id)arg1;

- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 categoryValue:(long long)arg2;

@end
