/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable;

__attribute__((visibility("hidden")))
@interface FPStitchingManager : NSObject

{
    NSHashTable *_stitchingSessions;
    NSMapTable *_bouncedItems;
}

@property (nonatomic, readonly) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
@property (nonatomic, readonly) NSArray *allPlaceholderReplacementsIDs;
@property (nonatomic, readonly) NSDictionary *stitchedFieldsAndItemsByItemIDs;

+ (id)sharedInstance;
+ (id)parentIdNameKeyForItem:(id)arg1;

- (id)init;
- (void)addBouncedItem:(id)arg1;
- (void)registerStitchingSession:(id)arg1;
- (void)removeBouncedItemsWithIDs:(id)arg1;

@end
