/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSPredicateOperatorUtilities : NSObject

+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (struct __CFLocale *)retainedLocale;
+ (_Bool)doRegexForString:(id)arg1 pattern:(id)arg2 likeProtect:(_Bool)arg3 flags:(unsigned long long)arg4 context:(CDStruct_4829dca9 *)arg5;
+ (long long)copyRegexFindSafePattern:(id)arg1 toBuffer:(unsigned short *)arg2;
+ (void)escapeFullwidthRegexChars:(id)arg1;

@end
