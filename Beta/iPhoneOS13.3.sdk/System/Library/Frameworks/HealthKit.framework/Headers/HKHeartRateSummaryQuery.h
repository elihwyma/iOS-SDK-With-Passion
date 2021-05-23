/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@interface HKHeartRateSummaryQuery : HKQuery

{
    CDUnknownBlockType _updateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)client_deliverSummary:(id)arg1 queryUUID:(id)arg2;
- (void)queue_validate;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
