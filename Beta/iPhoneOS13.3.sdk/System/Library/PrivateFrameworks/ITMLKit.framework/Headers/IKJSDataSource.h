/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSDataObservable.h>

#import <ITMLKit/Swift-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface IKJSDataSource : IKJSDataObservable <Swift>

{
    _Bool _dataSourceViewsDirty;
    long long _segmentSize;
    NSDictionary *_indexTitles;
    NSMutableArray *_dataSourceViewPointers;
    NSMutableDictionary *_loadIndexesRequestsBySegmentIndex;
    NSMutableIndexSet *_loadedSegmentIndexes;
}

@property (nonatomic, readonly) NSMutableArray *dataSourceViewPointers;
@property (nonatomic, readonly) NSMutableDictionary *loadIndexesRequestsBySegmentIndex;
@property (nonatomic, readonly) NSMutableIndexSet *loadedSegmentIndexes;
@property (copy, nonatomic, readonly) NSDictionary *indexTitles;
@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) long long segmentSize;

+ (id)jsExportedProperties;
+ (id)_titlesByIndexFromValue:(id)arg1;

- (id)initWithItems:(id)arg1;
- (id)item:(long long)arg1;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (id)initConstructor:(id)arg1:(id)arg2:(long long)arg3;
- (void)update:(id)arg1:(id)arg2:(long long)arg3;
- (void)insert:(long long)arg1:(id)arg2:(id)arg3;
- (id)delete:(long long)arg1:(long long)arg2;
- (id)replace:(long long)arg1:(id)arg2;
- (void)move:(long long)arg1:(long long)arg2:(long long)arg3:(id)arg4;
- (id)boxedItem:(long long)arg1;
- (id)initWithItems:(id)arg1 indexTitles:(id)arg2;
- (id)initWithItems:(id)arg1 indexTitles:(id)arg2 segmentSize:(long long)arg3;
- (void)_resetLoadedSegments;
- (void)_resetUsedIndexesAndMigrateItems:(id)arg1;
- (id)_spliceAtIndex:(long long)arg1 deleteCount:(long long)arg2 insertions:(id)arg3;
- (void)_updateTitlesFromIndex:(long long)arg1 deleteCount:(long long)arg2 insertionCount:(long long)arg3 title:(id)arg4;
- (long long)_segmentIndexForItemIndex:(long long)arg1;
- (void)_didAdjustSegmentIndexesFromIndex:(long long)arg1;
- (void)markDataSourceViewsUpdated;
- (void)_loadUsedIndexes;
- (id)_dataSourceViews;
- (id)asPrivateIKJSDataSource;
- (id)valuesForSubscripts:(struct _NSRange)arg1 boxed:(_Bool)arg2;
- (void)addDataSourceView:(id)arg1;
- (void)removeDataSourceView:(id)arg1;

@end
