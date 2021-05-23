/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSValue.h>

@interface NSValue (NSValueCMTimeExtensions)

+ (id)valueWithCMTime:(CDStruct_1b6d18a9)arg1;
+ (id)valueWithCMTimeRange:(CDStruct_e83c9415)arg1;
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;

- (CDStruct_e83c9415)CMTimeRangeValue;
- (CDStruct_1b6d18a9)CMTimeValue;
- (CDStruct_82206317)CMTimeMappingValue;

@end
