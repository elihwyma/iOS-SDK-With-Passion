/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;

@protocol PLHighlightItem;

@interface PLHighlightItemList : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableOrderedSet *_internalHighlightItems;
    NSMutableSet *_internalAddedHighlightItems;
    NSMutableSet *_internalRemovedHighlightItems;
    id <PLHighlightItem> _parentHighlightItem;
}

@property (nonatomic, readonly) NSMutableOrderedSet *internalHighlightItems;
@property (nonatomic, readonly) NSMutableSet *internalAddedHighlightItems;
@property (nonatomic, readonly) NSMutableSet *internalRemovedHighlightItems;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSArray *sortedChildHighlightItems;
@property (nonatomic, readonly) _Bool isNewList;
@property (nonatomic, readonly) _Bool isCandidateForReuse;
@property (nonatomic, readonly) _Bool hasChanges;
@property (copy, nonatomic, readonly) NSSet *addedHighlightItems;
@property (copy, nonatomic, readonly) NSSet *removedHighlightItems;
@property (nonatomic, readonly) id <PLHighlightItem> parentHighlightItem;

+ (id)timeSortDescriptors;

- (id)description;
- (void)reset;
- (id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2;
- (id)initAsNewList;
- (void)addHighlightItem:(id)arg1;
- (void)removeHighlightItem:(id)arg1;
- (void)_updateHighlightItemsOrdering;
- (void)_updateStartEndDates;
- (void)mergeWithHighlightItemList:(id)arg1;

@end
