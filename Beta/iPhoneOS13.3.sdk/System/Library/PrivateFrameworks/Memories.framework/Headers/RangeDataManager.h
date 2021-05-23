/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RangeDataManager : NSObject

+ (id)collapseRanges:(id)arg1;
+ (id)unionOfRangeLists:(id)arg1;
+ (id)intersectionOfRanges1:(id)arg1 ranges2:(id)arg2;
+ (id)unionOfRanges1:(id)arg1 ranges2:(id)arg2;
+ (id)intersectionOfRangeLists:(id)arg1;
+ (id)stringForRanges:(id)arg1;
+ (void)unionOfRangeLists:(id)arg1 interleavedIntoList1:(id *)arg2 andList2:(id *)arg3;
+ (id)invertedRanges:(id)arg1 duration:(long long)arg2;
+ (_Bool)location:(long long)arg1 isInRanges:(id)arg2 foundRange:(CDStruct_eba65aba *)arg3;
+ (void)ranges:(id)arg1 addRange:(CDStruct_eba65aba)arg2 forKey:(id)arg3;

@end
