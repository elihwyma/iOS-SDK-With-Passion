/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, _TVCommonSenseFooterView;

__attribute__((visibility("hidden")))
@interface _TVCommonSenseView : UIView

{
    UIView *_containerView;
    UIView *_headerView;
    NSArray *_infoViews;
    _TVCommonSenseFooterView *_footerView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *infoViews;
@property (retain, nonatomic) _TVCommonSenseFooterView *footerView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
