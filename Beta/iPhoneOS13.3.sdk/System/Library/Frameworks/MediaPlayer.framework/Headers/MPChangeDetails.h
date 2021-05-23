/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

@interface MPChangeDetails : NSObject

{
    NSMutableDictionary *_sectionMoves;
    NSMutableIndexSet *_updatedSectionMoveFromIndexes;
    NSMutableDictionary *_itemMoves;
    NSMutableSet *_updatedItemMoveFromIndexPaths;
    _Bool _isFlatCollection;
    NSIndexSet *_insertedSections;
    NSIndexSet *_deletedSections;
    NSIndexSet *_updatedSections;
    NSArray *_insertedItemIndexPaths;
    NSArray *_deletedItemIndexPaths;
    NSArray *_updatedItemIndexPaths;
}

@property (copy, nonatomic) NSIndexSet *insertedSections;
@property (copy, nonatomic) NSIndexSet *deletedSections;
@property (copy, nonatomic) NSIndexSet *updatedSections;
@property (copy, nonatomic) NSArray *insertedItemIndexPaths;
@property (copy, nonatomic) NSArray *deletedItemIndexPaths;
@property (copy, nonatomic) NSArray *updatedItemIndexPaths;
@property (nonatomic, readonly) _Bool hasChanges;
@property (copy, nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (copy, nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (copy, nonatomic, readonly) NSIndexSet *updatedIndexes;

+ (id)changeDetailsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 isEqualBlock:(CDUnknownBlockType)arg3 isUpdatedBlock:(CDUnknownBlockType)arg4;

- (id)description;
- (id)debugDescription;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)_finalize;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (void)appendSectionMoveFromIndex:(long long)arg1 toIndex:(long long)arg2 updated:(_Bool)arg3;
- (void)removeSectionMoveFromIndex:(long long)arg1;
- (void)enumerateSectionMovesWithBlock:(CDUnknownBlockType)arg1;
- (void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 updated:(_Bool)arg3;
- (void)removeItemMoveFromIndexPath:(id)arg1;
- (void)enumerateItemMovesWithBlock:(CDUnknownBlockType)arg1;

@end
