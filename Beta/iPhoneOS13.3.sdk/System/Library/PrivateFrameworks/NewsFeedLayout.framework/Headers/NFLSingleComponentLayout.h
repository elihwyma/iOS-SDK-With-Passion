/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLFeedCollectionViewLayoutAttributes, NFLRankedLayout, NSArray, NSString;

@protocol NFLFeedTileInfo;

@interface NFLSingleComponentLayout : NSObject

{
    id <NFLFeedTileInfo> _tileInfo;
    NFLRankedLayout *_rankedLayout;
}

@property (retain, nonatomic) NFLRankedLayout *rankedLayout;
@property (copy, nonatomic) id <NFLFeedTileInfo> tileInfo;
@property (nonatomic, readonly) unsigned long long columnSpan;
@property (nonatomic, readonly) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double rank;
@property (copy, nonatomic, readonly) NSArray *tileInfosUsed;
@property (nonatomic, readonly) unsigned long long rowSpan;

+ (id)singleComponentLayoutWithRankedLayout:(id)arg1 tileInfo:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)tileInfosUsedCount;

@end
