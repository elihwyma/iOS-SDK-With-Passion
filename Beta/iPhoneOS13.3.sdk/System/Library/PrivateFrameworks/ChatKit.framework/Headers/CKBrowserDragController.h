/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@protocol CKBrowserDragControllerDelegate;

@interface CKBrowserDragController : UIViewController

{
    id <CKBrowserDragControllerDelegate> _delegate;
}

@property (nonatomic) id <CKBrowserDragControllerDelegate> delegate;

- (id)initWithView:(id)arg1;

@end
