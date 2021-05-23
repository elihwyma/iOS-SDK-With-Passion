/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSDateFormatter.h>

@interface NSDateFormatter (TVPlaybackAdditions)

+ (id)tvp_ISO8601CombinedDateAndTimeFormatter;
+ (id)tvp_RFC1123DateFormatter;
+ (id)tvp_RFC850DateFormatter;
+ (id)tvp_asctimeDateFormatter;

@end
