/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <UIKit/UIView.h>

#import <PlatterKit/Swift-Protocol.h>

@class NSString, UIScrollView, UIViewController;

@protocol PLClickPresentationInteractionPresentable, PLExpandedPlatter><PLContentSizeCategoryAdjusting, PLExpandedPlatterPresentationViewDelegate;

@interface PLExpandedPlatterPresentationView : UIView <Swift>

{
    UIView<PLExpandedPlatter><PLContentSizeCategoryAdjusting> *_expandedPlatterView;
    UIScrollView *_scrollView;
    UIViewController<PLClickPresentationInteractionPresentable> *_presentableViewController;
    id <PLExpandedPlatterPresentationViewDelegate> _delegate;
}

@property (nonatomic, readonly) UIView<PLExpandedPlatter><PLContentSizeCategoryAdjusting> *expandedPlatterView;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (weak, nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentableViewController;
@property (weak, nonatomic) id <PLExpandedPlatterPresentationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_handleDismissButton:(id)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (void)_configureExpandedPlatterViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2;

@end
