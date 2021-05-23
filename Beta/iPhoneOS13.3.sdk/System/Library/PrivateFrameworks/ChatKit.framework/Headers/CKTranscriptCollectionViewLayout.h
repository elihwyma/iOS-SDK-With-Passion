/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class CADisplayLink, NSArray, NSDate, NSIndexSet, NSMutableDictionary, NSMutableIndexSet;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout

{
    _Bool _holdingBoundsInvalidation;
    _Bool _useInitialLayoutAttributesForRotation;
    _Bool _isResting;
    _Bool _easingUp;
    _Bool _hasLoadMore;
    _Bool _useFastQuanta;
    _Bool _coalesceInvalidations;
    _Bool _sizeCategoryIsAccessibilitySizeCategory;
    double _anchorYPosition;
    NSIndexSet *_indicesOfChatItemsToBeRemovedWithoutFading;
    NSIndexSet *_indicesOfChatItemsToBeInsertedWithoutFading;
    NSArray *_layoutAttributes;
    NSArray *_associatedLayoutAttributes;
    NSArray *_decorationLayoutAttributes;
    NSArray *_oldAssociatedLayoutAttributes;
    NSMutableIndexSet *_insertedAssociatedLayoutAttributes;
    CADisplayLink *_displayLink;
    double _prevTimestamp;
    NSDate *_lastTouchTime;
    NSMutableDictionary *_initialParentLayoutAttributes;
    NSMutableDictionary *_finalParentVerticalOffsets;
    struct CGPoint _targetContentOffset;
    struct CGSize _sizeForRotation;
    struct CGSize _contentSize;
    struct CGRect _visibleBounds;
}

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (copy, nonatomic) NSArray *associatedLayoutAttributes;
@property (copy, nonatomic) NSArray *decorationLayoutAttributes;
@property (copy, nonatomic) NSArray *oldAssociatedLayoutAttributes;
@property (retain, nonatomic) NSMutableIndexSet *insertedAssociatedLayoutAttributes;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct CGRect visibleBounds;
@property (nonatomic) double prevTimestamp;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) _Bool easingUp;
@property (nonatomic) _Bool isResting;
@property (retain, nonatomic) NSDate *lastTouchTime;
@property (nonatomic) _Bool hasLoadMore;
@property (retain, nonatomic) NSMutableDictionary *initialParentLayoutAttributes;
@property (retain, nonatomic) NSMutableDictionary *finalParentVerticalOffsets;
@property (nonatomic) _Bool useFastQuanta;
@property (nonatomic) _Bool coalesceInvalidations;
@property (nonatomic) _Bool sizeCategoryIsAccessibilitySizeCategory;
@property (nonatomic) double anchorYPosition;
@property (nonatomic) struct CGPoint targetContentOffset;
@property (nonatomic, getter=isHoldingBoundsInvalidation) _Bool holdingBoundsInvalidation;
@property (nonatomic, getter=isUsingInitialLayoutAttributesForRotation) _Bool useInitialLayoutAttributesForRotation;
@property (nonatomic) struct CGSize sizeForRotation;
@property (retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeRemovedWithoutFading;
@property (retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeInsertedWithoutFading;

+ (Class)layoutAttributesClass;
+ (long long)translateLayoutIndexToEffectIndex:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)updateContentSize;
- (void)reloadData;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateDisplayLink;
- (void)displayLinkFired:(id)arg1;
- (void)_dealloc;
- (void)sizeCategoryDidChange:(id)arg1;
- (long long)effectIndexForDecorationViewAtIndex:(long long)arg1;
- (void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2;
- (void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2;
- (void)clearParentInitialIndexesAndFinalOffsets;
- (void)updateAssociatedLayoutAttributesIfNecessary;
- (void)reduceMotionSettingChanged:(id)arg1;
- (void)prepareLayoutForRotisserieScrolling;
- (void)updateFrames;
- (double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5;
- (void)updateAttributesForAnchorYChangeWithAttributes:(id)arg1;
- (void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg1;

@end
