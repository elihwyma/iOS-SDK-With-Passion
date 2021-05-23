/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKQueryAnchor, NSArray, NSString;

@interface _HKDatabaseChangesQuery : HKQuery

{
    _Bool _includeChangeDetails;
    CDUnknownBlockType _resultsHandler;
    NSArray *_sampleTypes;
    HKQueryAnchor *_anchor;
    long long _changeDetailsQueryStrategy;
    long long _anchorStrategyChangeCountLimit;
}

@property (nonatomic, readonly) CDUnknownBlockType resultsHandler;
@property (copy, nonatomic, readonly) NSArray *sampleTypes;
@property (copy, nonatomic, readonly) HKQueryAnchor *anchor;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (nonatomic) long long anchorStrategyChangeCountLimit;
@property (nonatomic) _Bool includeChangeDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;

- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverQueryAnchor:(id)arg1 sampleTypeChanges:(id)arg2 queryUUID:(id)arg3;
- (id)initWithTypes:(id)arg1 anchor:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;

@end
