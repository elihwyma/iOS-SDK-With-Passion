/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface HKInteractiveChartMenstruationData : NSObject

{
    _Bool _startOfCycle;
    long long _value;
    NSDate *_date;
}

@property (nonatomic) long long value;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) _Bool startOfCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
