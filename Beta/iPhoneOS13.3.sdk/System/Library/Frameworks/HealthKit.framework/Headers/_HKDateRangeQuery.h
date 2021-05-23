/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@interface _HKDateRangeQuery : HKQuery

{
    CDUnknownBlockType _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_deliverDateRangeDictionary:(struct NSDictionary *)arg1 forQuery:(id)arg2;

@end
