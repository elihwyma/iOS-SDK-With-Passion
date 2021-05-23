/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasViewElementViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class IKGridElement, NSArray, NSString, UICollectionView, UIView, VideosExtrasGridViewControllerStyle, _VideosExtrasGridHeaderView, _VideosExtrasShelfCollectionViewLayout;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridElementViewController : VideosExtrasViewElementViewController <Swift>

{
    UIView *_titleRule;
    NSArray *_titleRuleConstraints;
    NSArray *_headerViewConstraints;
    UICollectionView *_collectionView;
    _VideosExtrasShelfCollectionViewLayout *_flowLayout;
    _VideosExtrasGridHeaderView *_headerView;
    _Bool _shelfStyle;
    VideosExtrasGridViewControllerStyle *_smallStyle;
    VideosExtrasGridViewControllerStyle *_mediumStyle;
    VideosExtrasGridViewControllerStyle *_largeStyle;
    VideosExtrasGridViewControllerStyle *_extraLargeStyle;
    VideosExtrasGridViewControllerStyle *_wideStyle;
}

@property (readonly) IKGridElement *viewElement;
@property (nonatomic, readonly) VideosExtrasGridViewControllerStyle *currentStyle;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *smallStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *mediumStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *largeStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *extraLargeStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *wideStyle;
@property (nonatomic, getter=isShelfStyle) _Bool shelfStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultCellStyle;
+ (id)_fontAttributesForTextStyle:(id)arg1;
+ (id)smallGalleryStyle;
+ (id)smallDetailStyle;
+ (id)mediumDetailStyle;
+ (id)smallStackGridStyle;
+ (id)mediumStackGridStyle;
+ (id)largeStackGridStyle;
+ (id)keyPathsForValuesAffectingContentScrollView;
+ (id)wideGalleryStyle;
+ (id)mediumGalleryStyle;
+ (id)largeGalleryStyle;
+ (id)extraLargeGalleryStyle;
+ (id)wideDetailStyle;
+ (id)largeDetailStyle;
+ (id)extraLargeDetailStyle;
+ (id)wideStackGridStyle;
+ (id)extraLargeStackGridStyle;

- (void)dealloc;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)contentScrollView;
- (id)initWithViewElement:(id)arg1;
- (void)setViewElement:(id)arg1;
- (void)_dynamicTypeDidChange;
- (void)_prepareLayout;
- (_Bool)_hasDescriptionText;
- (_Bool)_sectionIndexIsDescriptionSection:(long long)arg1;
- (id)_sectionElementForIndex:(unsigned long long)arg1;
- (id)_cellStyleForSection:(id)arg1;
- (id)_lockupForIndexPath:(id)arg1;
- (struct UIEdgeInsets)_sectionInsetsForSection:(id)arg1;
- (double)_cellSpacingForSection:(id)arg1;
- (id)_narrowStyle;
- (id)preferredLayoutGuide;
- (long long)preferredLayoutAttribute;

@end
