/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKMultiTypeQueryCursor, NSMutableArray, NSString;

@interface HKMultiTypeSampleQuery : HKQuery

{
    NSMutableArray *_samplesPendingDelivery;
    HKMultiTypeQueryCursor *_queryCursor;
    unsigned long long _limit;
    CDUnknownBlockType _resultsHandler;
}

@property (copy, nonatomic) HKMultiTypeQueryCursor *queryCursor;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (id)init;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)initWithQueryCursor:(id)arg1 limit:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 limit:(unsigned long long)arg6 resultsHandler:(CDUnknownBlockType)arg7;
- (void)client_deliverSampleObjects:(id)arg1 queryCursor:(id)arg2 deliverResults:(_Bool)arg3 query:(id)arg4;

@end
