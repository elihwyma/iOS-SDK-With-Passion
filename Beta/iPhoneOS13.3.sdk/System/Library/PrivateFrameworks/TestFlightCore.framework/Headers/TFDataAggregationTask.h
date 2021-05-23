/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TFDataAggregationTask : NSObject

{
    CDUnknownBlockType _loadDataBlock;
    CDUnknownBlockType _extractValuesBlock;
    NSString *_name;
    NSString *_logKey;
    NSArray *_providedEntryIdentifiers;
}

@property (copy, nonatomic) CDUnknownBlockType loadDataBlock;
@property (copy, nonatomic) CDUnknownBlockType extractValuesBlock;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *logKey;
@property (copy, nonatomic, readonly) NSArray *providedEntryIdentifiers;

+ (id)deviceInfoTask;
+ (id)_readableRATStringFromCTRadioAccessTechnology:(id)arg1;
+ (id)_readableNetworkConnectionTypStringFromNWPath:(id)arg1;
+ (id)networkInfoTask;
+ (id)sessionInfoTaskForIdentifier:(id)arg1;
+ (id)watchInfoTask;
+ (id)regionInfoTask;
+ (id)snapshotTasksForSession:(id)arg1;
+ (id)anytimeTasksForSession:(id)arg1;

- (id)description;
- (id)initWithName:(id)arg1 providedEntryIdentifiers:(id)arg2;
- (void)extractDataPropertiesFromData:(id)arg1 intoDataContainer:(id)arg2;
- (void)loadDataOnQueue:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
