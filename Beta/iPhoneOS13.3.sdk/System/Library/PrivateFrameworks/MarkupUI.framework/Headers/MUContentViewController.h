/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <UIKit/UIViewController.h>

@class AKController;

@protocol MUContentViewControllerDelegate;

@interface MUContentViewController : UIViewController

{
    id <MUContentViewControllerDelegate> _delegate;
    AKController *_annotationController;
}

@property (weak) id <MUContentViewControllerDelegate> delegate;
@property (retain) AKController *annotationController;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

@end
