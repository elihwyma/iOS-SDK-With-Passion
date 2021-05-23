/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <Swift>

{
    NSMutableDictionary *__sectionIndexesByDataSourceIdentifier;
    NSMutableDictionary *__indexesForSectionsWithItemsByDataSourceIdentifier;
    NSMutableDictionary *__itemIndexesBySectionByDataSourceIdentifier;
    NSMutableDictionary *__subitemIndexesByItemBySectionByDataSourceIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_indexesForSectionsWithItemsByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) struct PXSimpleIndexPath anySectionIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath anyItemIndexPath;

+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath)arg1;
+ (id)indexPathSetWithSectionIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2;
+ (id)indexPathSetWithItemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3;
+ (id)indexPathSetWithSubitemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3 item:(long long)arg4;
+ (id)indexPathSet;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (void)enumerateSubitemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)sectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1;
- (id)sectionsWithItemsForDataSourceIdentifier:(unsigned long long)arg1;
- (id)itemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2;
- (void)enumerateSectionIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubitemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDataSourceIdentifiers:(CDUnknownBlockType)arg1;
- (struct PXSimpleIndexPath)firstItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1;
- (struct PXSimpleIndexPath)lastItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1;
- (struct PXSimpleIndexPath)indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathLessThanIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)indexPathSetByReplacingDataSourceIdentifier:(unsigned long long)arg1 withDataSourceIdentifier:(unsigned long long)arg2;

@end
