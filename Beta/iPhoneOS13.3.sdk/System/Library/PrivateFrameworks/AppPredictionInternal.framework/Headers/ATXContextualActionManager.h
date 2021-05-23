/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXContextualActionCountCache, NSDate;

@interface ATXContextualActionManager : NSObject

{
    ATXContextualActionCountCache *actionCountCache;
    NSDate *actionCountCacheCreationDate;
}

- (id)init;
- (id)getCountsForContext:(id)arg1;
- (id)getAllCounts;
- (double)getIntervalSinceOldestEvent;
- (void)_updateCacheIfNeeded;
- (void)_getActionsFromLastMonth;
- (id)initWithStaticActions:(id)arg1;

@end
