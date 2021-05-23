/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TSDInfoGeometry, TSTLayout, TSTTableInfo, TSUPointerKeyDictionary;

@interface TSTTablePartitioner : NSObject

{
    TSTTableInfo *mTableInfo;
    TSDInfoGeometry *mInfoGeometry;
    double mFirstPartitionWidth;
    struct CGSize mScaleToFit;
    TSTLayout *mScaledLayout;
    TSUPointerKeyDictionary *mHintMatricesByCanvas;
    NSMutableDictionary *mPartitioningPassCache;
}

@property (nonatomic, readonly) TSTLayout *scaledLayout;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) double inlineTableWidth;
@property (nonatomic) struct CGSize scaleToFit;
@property (nonatomic, readonly) _Bool scaleIsValid;
@property (copy, nonatomic) TSDInfoGeometry *infoGeometry;

- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (_Bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (void)validateScaledLayout;
- (_Bool)p_didFinishPartitioningHint:(id)arg1 horizontally:(_Bool)arg2;
- (CDStruct_5f1f7aa9)measureCellRangeForNextPartitionOfSize:(struct CGSize)arg1 previousHint:(id)arg2 horizontally:(_Bool)arg3;
- (id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2;
- (id)hintCacheKeyForHint:(id)arg1;
- (_Bool)shouldReuseLayout:(id)arg1 forSize:(struct CGSize)arg2 parentLayout:(id)arg3 hint:(id)arg4;
- (void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(_Bool)arg3;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize)arg1;
- (id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(CDStruct_0441cfb5)arg2;

@end
