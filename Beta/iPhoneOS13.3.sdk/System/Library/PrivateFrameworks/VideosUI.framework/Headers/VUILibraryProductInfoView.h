/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUILibraryProductInfoView : UIView

{
    NSArray *_infos;
    NSArray *_groupedInfos;
    NSArray *_normalizedGroupedInfos;
    long long _layoutType;
    double _lineSpacing;
    UIView *_headerView;
    UIView *_footerView;
    struct UIEdgeInsets _headerMargin;
    struct UIEdgeInsets _footerMargin;
}

@property (nonatomic, readonly) long long maxLineCount;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets padding;
@property (copy, nonatomic) NSArray *groupedInfos;
@property (copy, nonatomic) NSArray *normalizedGroupedInfos;
@property (nonatomic) long long layoutType;
@property (nonatomic, readonly) double lineSpacing;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) struct UIEdgeInsets headerMargin;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) struct UIEdgeInsets footerMargin;
@property (copy, nonatomic) NSArray *infos;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (unsigned long long)_columnCount;
- (double)_maxWidthForGroupInfos:(id)arg1;
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect)arg2;
- (id)_getNormalizedGroupedInfos;
- (double)_sectionInfoWidth;

@end
