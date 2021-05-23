/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVFocusRedirectView.h>

@class IKViewElement, NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductStackView : _TVFocusRedirectView

{
    UIView *_lastFocusedView;
    UIView *_titleView;
    NSArray *_viewsAboveDescription;
    UIView *_descriptionView;
    NSArray *_viewsBelowDescription;
    UIView *_buttonsRowView;
    UIView *_initialFocusView;
    IKViewElement *_stackElement;
}

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) NSArray *viewsAboveDescription;
@property (retain, nonatomic) UIView *descriptionView;
@property (retain, nonatomic) NSArray *viewsBelowDescription;
@property (retain, nonatomic) UIView *buttonsRowView;
@property (retain, nonatomic) UIView *initialFocusView;
@property (retain, nonatomic) IKViewElement *stackElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)productStackViewWithElement:(id)arg1 existingView:(id)arg2;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;

@end
