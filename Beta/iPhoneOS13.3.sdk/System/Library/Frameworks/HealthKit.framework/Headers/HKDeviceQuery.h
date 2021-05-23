/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSMutableArray, NSString;

@interface HKDeviceQuery : HKQuery

{
    NSMutableArray *_resultDevices;
    CDUnknownBlockType _resultsHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType resultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)clientRemote_deliverDevices:(id)arg1 done:(_Bool)arg2 reset:(_Bool)arg3 query:(id)arg4;
- (id)initWithObjectType:(id)arg1 predicate:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;

@end
