/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NFLTrendingFeedLayoutSearchConfiguration : NSObject

{
    _Bool _showAccessoryText;
    unsigned long long _feedLayoutType;
    long long _groupConfigurationType;
}

@property (nonatomic) unsigned long long feedLayoutType;
@property (nonatomic) long long groupConfigurationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText;
@property (nonatomic, readonly) unsigned long long preferredTileInfoBatchSize;
@property (nonatomic, readonly) NSArray *allRowTypes;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (Class)_tilingOperationClassForRowType:(unsigned long long)arg1;
- (_Bool)supportsTileInfoType:(unsigned long long)arg1;
- (id)preferredOrderingOfTileInfos:(id)arg1;
- (id)initWithTrendingArticlesFeedLayoutType:(unsigned long long)arg1 groupConfigurationType:(long long)arg2;

@end
