/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKTombstoneRequirement.h>

@interface _DKAppUsageTombstoneRequirement : _DKTombstoneRequirement

- (id)predicate;
- (id)eventPredicate;
- (id)propertiesToFetch;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2;

@end
