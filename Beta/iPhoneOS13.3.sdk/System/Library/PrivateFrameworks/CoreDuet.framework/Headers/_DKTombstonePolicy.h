/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject

{
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
}

@property (retain, nonatomic) NSArray *requirements;
@property (retain, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (retain, nonatomic) NSPredicate *eventPredicateForEventsRequiredToBeTombstoned;
@property (retain, nonatomic) NSArray *propertiesToFetchForTombstones;

+ (id)defaultPolicy;

- (id)init;
- (id)initWithRequirements:(id)arg1;
- (id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id *)arg2;
- (id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id *)arg2;

@end
