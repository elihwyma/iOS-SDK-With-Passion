/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@interface _CLKTimeFormatSentinel : NSObject

+ (void)listenForLocaleChangesIfNecessary;
+ (void)_handleLocaleChange;

@end
