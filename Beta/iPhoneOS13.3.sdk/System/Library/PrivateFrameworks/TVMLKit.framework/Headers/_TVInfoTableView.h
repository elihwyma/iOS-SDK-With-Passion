/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVFocusRedirectView.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVInfoTableView : _TVFocusRedirectView

{
    UIView *_headerView;
    NSArray *_infoViews;
    UIView *_footerView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *infoViews;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)infoTableViewWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (double)_normalizedInfoHeaderWidth;

@end
