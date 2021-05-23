/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class MTMaterialView, NSLayoutConstraint, NSString, SBHRootSidebarController;

@protocol SBTodayOverlayViewControllerDelegate;

@interface SBTodayOverlayViewController : UIViewController

{
    id <SBTodayOverlayViewControllerDelegate> _delegate;
    double _presentationProgress;
    SBHRootSidebarController *_contentViewController;
    MTMaterialView *_backgroundView;
    NSLayoutConstraint *_contentLeadingConstraint;
}

@property (nonatomic, readonly) MTMaterialView *backgroundView;
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint;
@property (weak, nonatomic) id <SBTodayOverlayViewControllerDelegate> delegate;
@property (nonatomic) double presentationProgress;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, readonly) struct CGRect contentRect;
@property (nonatomic, readonly, getter=isHeaderVisible) _Bool headerVisible;
@property (nonatomic, readonly) SBHRootSidebarController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg1;
- (struct CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (struct CGSize)_suggestedTodayViewSizeForBounds:(struct CGRect)arg1;

@end
