/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSCharacterSet.h>

@interface NSCharacterSet (SFWPAdditions)

+ (id)allQuotesCharacterSetExcludingRight;
+ (id)allQuotesCharacterSetExcludingLeft;
+ (id)breakingSpaceCharacterSet;
+ (id)invisibleCharacterSet;
+ (id)spaceCharacterSet;
+ (id)normalQuotesCharacterSet;
+ (id)smartSingleQuotesCharacterSet;
+ (id)smartDoubleQuotesCharacterSet;
+ (id)smartQuotesCharacterSet;
+ (id)preSmartSet;
+ (id)postSmartSet;
+ (id)lineBreakingCharacterSet;

@end
