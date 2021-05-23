/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NFLSingleAggregateTileFeedLayoutSearchConfiguration : NSObject

{
    _Bool _showAccessoryText;
    Class _subBatchLayoutTilingOperationClass;
    Class _rankedLayoutGenerationOperationClass;
    long long _cellType;
    long long _rowSpan;
}

@property (retain, nonatomic) Class subBatchLayoutTilingOperationClass;
@property (retain, nonatomic) Class rankedLayoutGenerationOperationClass;
@property (nonatomic) long long cellType;
@property (nonatomic) long long rowSpan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText;
@property (nonatomic, readonly) unsigned long long preferredTileInfoBatchSize;
@property (nonatomic, readonly) NSArray *allRowTypes;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (_Bool)supportsTileInfoType:(unsigned long long)arg1;
- (id)initWithSubBatchLayoutTilingOperationClass:(Class)arg1 rankedLayoutGenerationOperationClass:(Class)arg2 cellType:(long long)arg3 rowSpan:(long long)arg4;

@end
