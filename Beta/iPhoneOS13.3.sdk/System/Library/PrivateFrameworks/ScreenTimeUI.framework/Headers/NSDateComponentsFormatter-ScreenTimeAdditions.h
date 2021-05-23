/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSDateComponentsFormatter.h>

@interface NSDateComponentsFormatter (ScreenTimeAdditions)

+ (id)st_sharedShortDynamicDateFormatter;
+ (id)st_sharedAbbreviatedSecondsDateFormatter;

@end
