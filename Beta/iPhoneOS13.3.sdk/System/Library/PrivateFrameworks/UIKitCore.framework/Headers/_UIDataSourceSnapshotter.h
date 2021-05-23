/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshotter : NSObject <Swift>

{
    struct vector<_NSRange, std::__1::allocator<_NSRange>> _sectionRanges;
}

+ (id)snapshotWithSectionCountsProvider:(CDUnknownBlockType)arg1;
+ (id)snapshotForDataSourceBackedView:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)snapshot;
- (long long)globalIndexForIndexPath:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)initWithSectionCounts:(id)arg1;
- (long long)numberOfItems;
- (struct _NSRange)rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (_Bool)_insertSection:(long long)arg1 withInitialCount:(long long)arg2;
- (_Bool)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (_Bool)_deleteSection:(long long)arg1;
- (_Bool)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (_Bool)_decrementSectionCount:(long long)arg1;
- (_Bool)_incrementSectionCount:(long long)arg1;
- (id)initWithSectionCountsProvider:(CDUnknownBlockType)arg1;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (_Bool)indexPathIsSectionAppendingInsert:(id)arg1;
- (id)indexPathForAppendingInsertInSection:(long long)arg1;
- (id)initWithDataSourceBackedView:(id)arg1;
- (void)_recomputeRangeLocations;
- (_Bool)_deleteAllSections;

@end
