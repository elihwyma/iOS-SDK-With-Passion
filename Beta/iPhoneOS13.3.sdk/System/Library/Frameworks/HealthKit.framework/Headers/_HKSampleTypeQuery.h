/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@interface _HKSampleTypeQuery : HKQuery

{
    CDUnknownBlockType _resultsHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_deliverError:(id)arg1;
- (void)client_deliverSampleTypes:(id)arg1 query:(id)arg2;
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;

@end
