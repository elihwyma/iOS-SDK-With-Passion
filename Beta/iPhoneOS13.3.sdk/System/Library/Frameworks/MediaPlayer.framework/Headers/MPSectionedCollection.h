/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@interface MPSectionedCollection : NSObject <Swift>

{
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property (nonatomic, readonly) id firstSection;
@property (nonatomic, readonly) id lastSection;
@property (nonatomic, readonly) id firstItem;
@property (nonatomic, readonly) id lastItem;
@property (nonatomic, readonly) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)globalIndexForIndexPath:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)allItems;
- (id)_stateDumpObject;
- (id)allSections;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (_Bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(CDUnknownBlockType)arg2 isUpdatedBlock:(CDUnknownBlockType)arg3;
- (void)_initializeAsEmptySectionedCollection;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (void)enumerateItemIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;

@end
