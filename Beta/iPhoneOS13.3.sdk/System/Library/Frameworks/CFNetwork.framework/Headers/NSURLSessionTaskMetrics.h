/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSDateInterval, __CFN_TaskMetrics;

@interface NSURLSessionTaskMetrics : NSObject

{
    __CFN_TaskMetrics *__metrics;
}

@property (nonatomic, readonly) __CFN_TaskMetrics *_metrics;
@property (copy, readonly) NSArray *transactionMetrics;
@property (copy, readonly) NSDateInterval *taskInterval;
@property (readonly) unsigned long long redirectCount;

+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1;

@end
