/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

#import <NewsFeedLayout/Swift-Protocol.h>

@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <Swift>

{
    _Bool _vetoed;
    NFLFeedCollectionViewLayoutAttributes *_layoutAttributes;
    double _rank;
    NSMutableDictionary *_ranks;
}

@property (retain, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic) double rank;
@property (nonatomic) _Bool vetoed;
@property (copy, nonatomic) NSMutableDictionary *ranks;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
