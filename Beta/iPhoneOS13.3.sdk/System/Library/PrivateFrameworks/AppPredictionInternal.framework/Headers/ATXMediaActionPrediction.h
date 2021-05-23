/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXMediaActionPrediction : NSObject

+ (id)getAllUpcomingMedia;
+ (id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const struct ATXPredictionItem *)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6;
+ (_Bool)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2;
+ (_Bool)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1;
+ (struct _PASTuple2 *)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2;
+ (struct _PASTuple2 *)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (struct _PASTuple2 *)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (struct _PASTuple2 *)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (id)findTopRankedINPlayMediaIntentFromArray:(id)arg1;
+ (id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(_Bool)arg2;

@end
