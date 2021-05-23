/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs

{
    NSMutableArray *_movedSourceIndexPaths;
    NSMutableArray *_movedDestinationIndexPaths;
    NSMutableIndexSet *_deletedIndexes;
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_updatedIndexes;
}

@property (retain) NSMutableArray *movedSourceIndexPaths;
@property (retain) NSMutableArray *movedDestinationIndexPaths;
@property (retain) NSMutableIndexSet *deletedIndexes;
@property (retain) NSMutableIndexSet *insertedIndexes;
@property (retain) NSMutableIndexSet *updatedIndexes;

- (_Bool)containsChanges;

@end
