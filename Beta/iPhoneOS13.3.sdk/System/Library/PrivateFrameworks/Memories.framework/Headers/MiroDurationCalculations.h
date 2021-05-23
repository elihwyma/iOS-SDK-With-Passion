/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MiroDurationCalculations : NSObject

+ (double)durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3 respectTrim:(_Bool)arg4 localOnly:(_Bool)arg5;
+ (double)rawDurationOfItems:(id)arg1 inRange:(struct _NSRange)arg2;
+ (long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2;
+ (double)biasedDurationOfItems:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)_itemsForDuration:(double)arg1 inPickList:(id)arg2 blueprint:(id)arg3 localOnly:(_Bool)arg4 respectTrim:(_Bool)arg5;
+ (double)maxPleasantDurationOfItems:(id)arg1 inRange:(struct _NSRange)arg2;
+ (int)durationRangeForFrozenPickList:(id)arg1;
+ (struct Buckets)doAllTheThingsForPickList:(id)arg1;
+ (double)maxDurationForPickList:(id)arg1 withBlueprint:(id)arg2;
+ (long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 withBlueprint:(id)arg3 respectTrim:(_Bool)arg4 outputResidual:(double *)arg5;

@end
