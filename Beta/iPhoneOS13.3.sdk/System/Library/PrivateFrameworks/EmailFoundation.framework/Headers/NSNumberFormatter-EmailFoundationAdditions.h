/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSNumberFormatter.h>

@interface NSNumberFormatter (EmailFoundationAdditions)

+ (id)ef_formatInteger:(long long)arg1 withGrouping:(_Bool)arg2;
+ (id)ef_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(_Bool)arg2;

@end
