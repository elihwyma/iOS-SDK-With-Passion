/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/Swift-Protocol.h>

@class NSArray;

@protocol NFLFeedLayoutSearchConfiguration <Swift>

@property (nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText;
@property (nonatomic, readonly) unsigned long long preferredTileInfoBatchSize;
@property (nonatomic, readonly) NSArray *allRowTypes;

- (unsigned short)nextRowTypeCandidatesForRowType: /* Error: Ran out of types for this method. */;
- (unsigned short)descriptionForRowType: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionRankFromNoneToRowType: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionRankFromRowTypeToNone: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionRankFromRowType:toRowType: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfTileInfosUsedByRowType: /* Error: Ran out of types for this method. */;
- (unsigned short)subBatchLayoutTilingOperationClassForRowType: /* Error: Ran out of types for this method. */;
- (unsigned short)subBatchLayoutSeedForRowType:withTileInfos: /* Error: Ran out of types for this method. */;
- (unsigned short)rankedLayoutGenerationOperationClassForRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsTileInfoType: /* Error: Ran out of types for this method. */;

@end
