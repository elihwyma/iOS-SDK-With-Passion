/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString;

@interface PXSearchResultsSection : NSObject

{
    _Bool _expanded;
    _Bool _sorted;
    NSString *_title;
    NSArray *_sortDescriptors;
    unsigned long long _sectionType;
    NSMutableArray *_mutableSearchResults;
    NSMutableSet *_mutableSearchResultUUIDs;
}

@property (nonatomic, readonly) NSMutableArray *mutableSearchResults;
@property (nonatomic, getter=isSorted) _Bool sorted;
@property (nonatomic, readonly) NSMutableSet *mutableSearchResultUUIDs;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *searchResults;
@property (nonatomic, readonly, getter=isExpandable) _Bool expandable;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic, readonly) unsigned long long sectionType;
@property (nonatomic, readonly) unsigned long long visibleCount;
@property (nonatomic, readonly) unsigned long long totalCount;
@property (readonly) NSDictionary *debugDictionary;

+ (id)sectionTitleForCategoryMask:(unsigned long long)arg1;
+ (id)_stringForCategory:(unsigned long long)arg1;
+ (unsigned long long)sectionTypeForCategoryMask:(unsigned long long)arg1 isMomentSection:(_Bool)arg2 isTopAssetSection:(_Bool)arg3;
+ (unsigned long long)_sectionTypeForCategory:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)initWithTitle:(id)arg1 withSectionType:(unsigned long long)arg2;
- (unsigned long long)maxVisibleItemsInCollapsedSection;
- (void)addSearchResult:(id)arg1;
- (void)removeSearchResult:(id)arg1;

@end
