/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@interface CUIKEventTimeDetector : NSObject

+ (id)resultDictionaryForString:(id)arg1 referenceDate:(id)arg2;
+ (id)resultDictionaryForString:(id)arg1 referenceDate:(id)arg2 ignoreDurationForApproximateTime:(_Bool)arg3 preferTimes:(_Bool)arg4;
+ (id)dateResultsFromString:(id)arg1 referenceDate:(id)arg2;
+ (id)stripRanges:(id)arg1 fromString:(id)arg2;

@end
