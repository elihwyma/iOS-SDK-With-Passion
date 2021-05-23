/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSString;

@protocol CRKComposableView, SiriUIReusableView;

@interface SiriUICardSectionView : UIView

{
    UIView<CRKComposableView> *_composedSuperview;
    NSString *_cardSectionViewIdentifier;
    UIView<SiriUIReusableView> *_headerView;
    UIView *_contentView;
    UIView<SiriUIReusableView> *_footerView;
    double _headerViewHeight;
    double _footerViewHeight;
    struct CGSize _contentSize;
}

@property (retain, nonatomic) UIView<SiriUIReusableView> *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView<SiriUIReusableView> *footerView;
@property (nonatomic) double headerViewHeight;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) double footerViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;

+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)removeFromComposedSuperview;

@end
