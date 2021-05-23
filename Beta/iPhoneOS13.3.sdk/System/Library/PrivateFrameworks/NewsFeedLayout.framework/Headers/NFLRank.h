/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@interface NFLRank : NSObject

{
    double _rank;
    long long _rankWeight;
}

@property (nonatomic) double rank;
@property (nonatomic) long long rankWeight;

+ (id)rankWithRank:(double)arg1 rankWeight:(long long)arg2;

- (id)description;

@end
