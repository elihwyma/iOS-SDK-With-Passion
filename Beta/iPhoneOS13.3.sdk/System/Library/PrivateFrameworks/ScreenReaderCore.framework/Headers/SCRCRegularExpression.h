/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCRegularExpression : NSObject

+ (struct URegularExpression *)createRegularExpressionFromString:(id)arg1;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression *)arg2;

@end
