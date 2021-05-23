/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSArray, PUSectionedGridLayout, UIView;

@protocol PUGridRenderedStripDataSource;

__attribute__((visibility("hidden")))
@interface PUGridRenderedStrip : UICollectionReusableView

{
    _Bool _extendsToTop;
    _Bool __needsRendering;
    int _backgroundColorValue;
    double _itemContentScale;
    double _leftContentInset;
    NSArray *_itemIndexPaths;
    long long _visualSectionIndex;
    id <PUGridRenderedStripDataSource> _dataSource;
    PUSectionedGridLayout *_layout;
    unsigned long long _contentExtenderType;
    UIView *_topContentView;
    UIView *__sideExtendedContentView;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct _NSRange _visualItemRange;
}

@property (nonatomic, setter=_setNeedsRendering:) _Bool _needsRendering;
@property (nonatomic, readonly) UIView *_sideExtendedContentView;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) double itemContentScale;
@property (nonatomic) struct CGSize interItemSpacing;
@property (nonatomic) double leftContentInset;
@property (nonatomic) int backgroundColorValue;
@property (retain, nonatomic) NSArray *itemIndexPaths;
@property (nonatomic, readonly) long long visualSectionIndex;
@property (nonatomic, readonly) struct _NSRange visualItemRange;
@property (weak, nonatomic) id <PUGridRenderedStripDataSource> dataSource;
@property (weak, nonatomic) PUSectionedGridLayout *layout;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic) unsigned long long contentExtenderType;
@property (nonatomic) _Bool extendsToTop;
@property (nonatomic, readonly) UIView *topContentView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)_disableRasterizeInAnimations;
- (void)_render;
- (void)setNeedsRendering;
- (void)setVisualSectionIndex:(long long)arg1 andVisualItemRange:(struct _NSRange)arg2;
- (void)_updateExtendedContents;

@end
