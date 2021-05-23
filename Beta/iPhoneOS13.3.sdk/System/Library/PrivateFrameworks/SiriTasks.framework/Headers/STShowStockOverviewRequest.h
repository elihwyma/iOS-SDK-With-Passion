/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSNumber, NSString;

@interface STShowStockOverviewRequest : AFSiriRequest

{
    NSString *_name;
    NSString *_symbol;
    NSString *_exchange;
    NSNumber *_price;
    NSNumber *_high;
    NSNumber *_low;
    NSNumber *_change;
    NSNumber *_changePercent;
    NSString *_chartData;
}

+ (_Bool)supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)symbol;
- (id)price;
- (id)chartData;
- (id)createResponse;
- (id)change;
- (id)changePercent;
- (id)exchange;
- (id)high;
- (id)low;
- (id)_initWithName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 high:(id)arg5 low:(id)arg6 change:(id)arg7 changePercent:(id)arg8 chartData:(id)arg9;

@end
