/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs

{
    NSMutableArray *_deletedItemIDs;
    NSMutableArray *_updatedItems;
    NSMutableDictionary *_replacedItemsByFormerID;
}

@property (retain) NSMutableArray *deletedItemIDs;
@property (retain) NSMutableArray *updatedItems;
@property (retain) NSMutableDictionary *replacedItemsByFormerID;

- (_Bool)containsChanges;

@end
