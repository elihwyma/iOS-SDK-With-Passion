/*
 Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
 */

#import <Foundation/NSArray.h>

@interface NSArray (FIAdditions)

+ (id)fi_arrayByEnumeratingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;

- (id)fi_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)fi_flatMapUsingBlock:(CDUnknownBlockType)arg1;
- (id)fi_filteredArrayUsingBlock:(CDUnknownBlockType)arg1;
- (id)fi_reduceWithReduction:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
