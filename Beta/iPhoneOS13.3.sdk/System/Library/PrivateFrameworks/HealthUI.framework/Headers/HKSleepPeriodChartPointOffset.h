/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HKSleepPeriodChartPointOffset : NSObject

{
    _Bool _continuation;
    NSNumber *_value;
}

@property (nonatomic, readonly) NSNumber *value;
@property (nonatomic, readonly) _Bool continuation;

+ (id)chartPointOffsetWithValue:(id)arg1 continuation:(_Bool)arg2;

- (id)initWithValue:(id)arg1 continuation:(_Bool)arg2;

@end
