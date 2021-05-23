/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSCharacterSet.h>

@interface NSCharacterSet (SCRCCharacterSetExtras)

+ (id)wordBreakCharacterSet;
+ (id)emojiCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)passwordBulletCharacterSet;

@end
