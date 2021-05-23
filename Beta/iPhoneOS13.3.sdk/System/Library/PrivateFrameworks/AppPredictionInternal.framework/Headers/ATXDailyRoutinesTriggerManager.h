/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateFormatter;

@protocol ATXCachedTransitionPredictorProtocol, ATXContextStoreWriterProtocol, ATXTransitionPredictorProtocol;

@interface ATXDailyRoutinesTriggerManager : NSObject

{
    NSDateFormatter *_dateFormatter;
    id <ATXCachedTransitionPredictorProtocol> _cachedPredictor;
    id <ATXTransitionPredictorProtocol> _transitionPredictor;
    id <ATXContextStoreWriterProtocol> _contextStoreWriter;
    NSDate *_now;
}

@property (retain, nonatomic) NSDate *now;

+ (id)sharedInstance;
+ (id)_wakeupDateForExitDate:(id)arg1 fromDate:(id)arg2;
+ (id)convenienceDateFormatter;

- (id)init;
- (id)initWithCacheBasedPredictor:(id)arg1 transitionPredictor:(id)arg2 contextStoreWriter:(id)arg3;
- (void)updateWithActivity:(id)arg1;
- (void)_scheduleOneShotJobAfterInterval:(double)arg1;

@end
