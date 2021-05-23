/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UICollectionViewCell.h>

@class NSString, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView, UILabel, UIView;

@protocol SiriUIReusableView;

@interface SiriUISnippetControllerCell : UICollectionViewCell

{
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_materialView;
    UIView *_clippingContainerView;
    UIView *_cancelledTouchPreventionView;
    UILabel *_cancelledLabel;
    _Bool _cellIsUsingPlatterStyle;
    double _topPadding;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    SiriUISnippetViewController *_snippetViewController;
    struct UIEdgeInsets _snippetEdgeInsets;
}

@property (nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct UIEdgeInsets snippetEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;
+ (struct CGRect)contentBoundsForCollectionViewCellBounds:(struct CGRect)arg1 snippetViewController:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityIdentifier;
- (void)layoutSubviews;
- (void)_setHeaderView:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (void)setShowBackgroundView:(_Bool)arg1;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)_configureSubviewsForCurrentInset;
- (double)_heightForFooterView;
- (double)_heightForTransparentHeaderView;
- (double)_heightForTransparentFooterView;
- (double)_heightForHeaderView;
- (void)_setFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetResizeToSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;

@end
