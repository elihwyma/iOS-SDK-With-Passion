/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

#import <NewsFeedLayout/Swift-Protocol.h>

@class NFLFeedCollectionViewLayoutAttributes;

@protocol NFLFeedTileInfo;

@interface NFLFeedTileLayoutInfo : NSObject <Swift>

{
    NSObject<NFLFeedTileInfo> *_tileInfo;
    NFLFeedCollectionViewLayoutAttributes *_layoutAttributes;
}

@property (copy, nonatomic) NSObject<NFLFeedTileInfo> *tileInfo;
@property (copy, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;

+ (id)nfl_layoutInfoWithTileInfo:(id)arg1 forLayoutAttributes:(id)arg2 atRowOrigin:(long long)arg3 columnOrigin:(long long)arg4 subBatchRowOffset:(long long)arg5 feedSettings:(id)arg6;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTileInfo:(id)arg1 layoutAttributes:(id)arg2;

@end
