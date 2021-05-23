/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKUIDividedGridViewController;

@interface EKUIDividedGridView : UIView

{
    EKUIDividedGridViewController *_viewController;
}

@property (weak) EKUIDividedGridViewController *viewController;

- (struct CGSize)intrinsicContentSize;

@end
