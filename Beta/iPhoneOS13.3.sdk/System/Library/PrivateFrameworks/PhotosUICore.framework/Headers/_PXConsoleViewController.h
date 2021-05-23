/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class UIBarButtonItem, UITextView;

@interface _PXConsoleViewController : UIViewController

{
    _Bool _toolBarWasHidden;
    UITextView *__textView;
    UIBarButtonItem *__shareBarButtonItem;
}

@property (nonatomic, readonly) UITextView *_textView;
@property (nonatomic, readonly) UIBarButtonItem *_shareBarButtonItem;
@property (nonatomic) _Bool toolBarWasHidden;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)appendOutput:(id)arg1;
- (void)_presentSharingViewController:(id)arg1;

@end
