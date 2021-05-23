/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMetricsFigaroEventModifier, NSArray, NSDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroBagConfguration : NSObject

{
    NSArray *_overrides;
    NSDictionary *_metricsDictionary;
    AMSMetricsFigaroEventModifier *_defaultModifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSDictionary *metricsDictionary;
@property (nonatomic, readonly) NSArray *overrides;
@property (nonatomic, readonly) AMSMetricsFigaroEventModifier *defaultModifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double flushInterval;

+ (id)configurationWithBag:(id)arg1 error:(id *)arg2;

- (void)prepareForFlush;
- (id)modifierForEvent:(id)arg1;
- (id)initWithMetricsDictionary:(id)arg1;
- (id)_generateModifiersIfNeeded;

@end
