/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class CKForceLayoutAnimator, WFContentCoercionNodeView, WFContentItem;

__attribute__((visibility("hidden")))
@interface WFContentGraphViewController : UIViewController

{
    _Bool _coercing;
    WFContentItem *_contentItem;
    CKForceLayoutAnimator *_animator;
    WFContentCoercionNodeView *_rootNodeView;
}

@property (retain, nonatomic) CKForceLayoutAnimator *animator;
@property (retain, nonatomic) WFContentCoercionNodeView *rootNodeView;
@property (nonatomic) _Bool coercing;
@property (nonatomic, readonly) WFContentItem *contentItem;

- (void)done;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithContentItem:(id)arg1;
- (_Bool)useSmallBubbles;
- (void)tapNode:(id)arg1;
- (void)panNode:(id)arg1;

@end
