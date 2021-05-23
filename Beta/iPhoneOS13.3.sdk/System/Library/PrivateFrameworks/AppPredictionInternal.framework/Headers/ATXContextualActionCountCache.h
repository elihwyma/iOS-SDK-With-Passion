/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDate, NSDateInterval;

@interface ATXContextualActionCountCache : NSObject

{
    NSCountedSet *headingToWorkActions;
    NSCountedSet *headingHomeActions;
    NSCountedSet *unspecifiedActions;
    NSCountedSet *allActions;
    NSDateInterval *headingToWorkDateInterval;
    NSDateInterval *headingHomeDateInterval;
    NSDateInterval *otherDateInterval;
    NSDate *_oldestAction;
}

@property (nonatomic, readonly) NSDate *oldestAction;

- (id)init;
- (void)addMinimalActionParameter:(id)arg1;
- (id)getCountsForContext:(id)arg1;
- (id)getAllCounts;

@end
