/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSNumberFormatter.h>

@interface NSNumberFormatter (GKAdditions)

+ (id)gk_formatInteger:(long long)arg1 withGrouping:(_Bool)arg2;
+ (id)gkRankFormatter;
+ (id)gk_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(_Bool)arg2;

@end
