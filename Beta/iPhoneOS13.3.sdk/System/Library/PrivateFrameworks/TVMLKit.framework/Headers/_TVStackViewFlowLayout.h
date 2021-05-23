/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class IKChangeSet, NSArray, NSIndexSet;

@protocol _TVStackViewDelegateFlowLayout;

@interface _TVStackViewFlowLayout : UICollectionViewLayout

{
    id <_TVStackViewDelegateFlowLayout> _stackViewDelegateFlowLayout;
    struct {
        _Bool hasShowcaseFactorDidChange;
    } _stackViewDelegateFlowLayoutFlags;
    NSArray *_oldSectionCellLayoutAttributes;
    IKChangeSet *_changeSet;
    NSIndexSet *_indexesAddedAtEnd;
    struct CGPoint _initialContentOffset;
    _Bool _isFullReplace;
    double _lastLayoutWidth;
    long long _supplementaryCellSection;
    NSArray *_supplementaryCellLayoutAttributes;
    CDUnknownBlockType _onPrepareLayout;
    double _showcaseHeight;
    double _showcaseFactor;
    NSArray *_sectionCellLayoutAttributes;
    struct CGSize _contentSize;
}

@property (copy, nonatomic) NSArray *sectionCellLayoutAttributes;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) long long supplementaryCellSection;
@property (copy, nonatomic) NSArray *supplementaryCellLayoutAttributes;
@property (copy, nonatomic) CDUnknownBlockType onPrepareLayout;
@property (nonatomic) double showcaseHeight;
@property (nonatomic, readonly) double showcaseFactor;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (double)_computeShowcaseFactorForContentOffset:(struct CGPoint)arg1;
- (void)_prepareSectionMetrics;
- (id)_oldLayoutAttributesForItemAtIndexPath:(id)arg1;

@end
