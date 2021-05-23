/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVInfoListView : UIView

{
    long long _maxLineCount;
    double _lineSpacing;
    double _interitemSpacing;
    UIView *_headerView;
    UIView *_footerView;
    NSArray *_infos;
    NSArray *_groupedInfos;
}

@property (nonatomic) long long maxLineCount;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) NSArray *infos;
@property (copy, nonatomic) NSArray *groupedInfos;

+ (id)infoListViewWithElement:(id)arg1 existingView:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_maxWidthForGroupInfos:(id)arg1;
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect)arg2;

@end
