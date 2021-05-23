/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXSlotResolution;

@interface ATXActionResolution : NSObject

{
    ATXSlotResolution *_slotResolver;
}

- (id)init;
- (id)statisticsForActionKey:(id)arg1;
- (id)initWithSlotResolver:(id)arg1;
- (id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const struct ATXPredictionItem *)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(_Bool)arg7;
- (id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const struct ATXPredictionItem *)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(_Bool)arg7 predictionItemsToKeep:(vector_5be31511 *)arg8;

@end
