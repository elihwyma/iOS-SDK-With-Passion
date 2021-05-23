/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface PRSRankingRenderAndEngagementValues : NSObject

{
    short _renderValues[6];
    short _engagementValues[6];
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)getRankingValues:(short *)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3;
- (void)setRankingValues:(short [6])arg1 forType:(int)arg2;
- (void)incrementRankingValuesForType:(int)arg1;

@end
