/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ATXDuetDataProvider : NSObject

{
    NSArray *_streamData;
}

@property (nonatomic, readonly) NSArray *streamData;

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;
+ (id)duetHelperStreamTypeToDuetEventStream:(long long)arg1;

- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;
- (id)fetchEventIdentifierCountsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;
- (id)filteredEventsWithPredicate:(id)arg1;
- (void)tagEventsWithLocationsFromLocationVisitsArray:(id)arg1;
- (id)getUniqueValuesForPropertyKey:(id)arg1;

@end
