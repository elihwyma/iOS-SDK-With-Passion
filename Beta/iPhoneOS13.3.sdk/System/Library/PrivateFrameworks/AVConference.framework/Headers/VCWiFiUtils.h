/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCWiFiUtils : NSObject

+ (_Bool)getInfraChannelNumber:(int *)arg1 is5Ghz:(_Bool *)arg2;
+ (_Bool)copyAWDLChannelSequence:(id *)arg1 twoPtFourGhzChannelCount:(int *)arg2 fiveGhzChannelCount:(int *)arg3 dfsChannelCount:(int *)arg4 inactiveSlotCount:(int *)arg5;

@end
