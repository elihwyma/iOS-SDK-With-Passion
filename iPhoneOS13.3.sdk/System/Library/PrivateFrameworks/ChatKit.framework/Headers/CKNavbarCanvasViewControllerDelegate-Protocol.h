//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKNavbarCanvasViewController, UIView, UIViewController;

@protocol CKNavbarCanvasViewControllerDelegate <NSObject>
- (NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForViewController:(UIViewController *)arg1;
- (void)navbarCanvasViewControllerWantsNavbarResize:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 buttonWasPressedOfType:(long long)arg2 wasLongPress:(BOOL)arg3;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 didTapView:(UIView *)arg2;
@end

