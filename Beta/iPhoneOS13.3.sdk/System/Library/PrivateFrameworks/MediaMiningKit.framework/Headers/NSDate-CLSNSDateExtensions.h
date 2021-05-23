/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSDate.h>

@interface NSDate (CLSNSDateExtensions)

+ (id)dateFromString:(id)arg1;
+ (id)dateComponentsFromString:(id)arg1;

- (id)dateByAddingDays:(long long)arg1;
- (id)nextWeekend;
- (id)previousWeekend;

@end
