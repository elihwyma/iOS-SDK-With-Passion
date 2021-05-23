/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@protocol _DKKnowledgeQuerying;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject

{
    ATXHeuristicDevice *_device;
    id <_DKKnowledgeQuerying> _duetStore;
}

+ (id)medianFrom:(id)arg1;
+ (id)timeOfDayFromDonations:(id)arg1;

- (id)initWithDevice:(id)arg1;
- (void)alarmTimeOfDay:(CDUnknownBlockType)arg1;
- (id)_recentIntentDonationsForBundleId:(id)arg1 limit:(unsigned long long)arg2;

@end
