/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, PHAsset;

@protocol PGHighlightItem;

@interface PGHighlightItemList : NSObject

{
    unsigned short _type;
    unsigned short _visibilityState;
    unsigned short _enrichmentState;
    unsigned short _kind;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSMutableOrderedSet *_internalHighlightItems;
    NSMutableSet *_internalAddedHighlightItems;
    NSMutableSet *_internalRemovedHighlightItems;
    id <PGHighlightItem> _parentHighlightItem;
    NSString *_dateDescription;
    NSString *_smartDescription;
    PHAsset *_keyAsset;
    NSArray *_extendedCuratedAssets;
    id _modelObject;
    double _promotionScore;
}

@property (retain, nonatomic) NSMutableOrderedSet *internalHighlightItems;
@property (nonatomic, readonly) NSMutableSet *internalAddedHighlightItems;
@property (nonatomic, readonly) NSMutableSet *internalRemovedHighlightItems;
@property (retain, nonatomic) id modelObject;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDateComponents *localDateComponents;
@property (nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSArray *sortedChildHighlightItems;
@property (copy, nonatomic, readonly) NSArray *sortedHighlightItemModelObjects;
@property (nonatomic, readonly) _Bool isNewList;
@property (nonatomic, readonly) _Bool isCandidateForReuse;
@property (nonatomic, readonly) _Bool hasChanges;
@property (copy, nonatomic, readonly) NSSet *addedHighlightItems;
@property (copy, nonatomic, readonly) NSSet *removedHighlightItems;
@property (nonatomic, readonly) id <PGHighlightItem> parentHighlightItem;
@property (copy, nonatomic) NSString *dateDescription;
@property (copy, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) NSArray *extendedCuratedAssets;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short visibilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short kind;
@property (nonatomic, readonly) unsigned short enrichmentState;

+ (id)timeSortDescriptors;
+ (void)updateParentHighlightItemLists:(id)arg1 withChildHighlightItems:(id)arg2;

- (id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2;
- (id)initAsNewList;
- (void)addHighlightItem:(id)arg1;
- (void)removeHighlightItem:(id)arg1;
- (void)_updateHighlightItemsOrdering;

@end
