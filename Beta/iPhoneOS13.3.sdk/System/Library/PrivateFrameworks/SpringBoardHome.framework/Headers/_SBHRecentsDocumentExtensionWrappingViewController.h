/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray;

@interface _SBHRecentsDocumentExtensionWrappingViewController : UIViewController

{
    UIViewController *_wrappedRemoteViewController;
    NSMutableArray *_constraints;
}

- (id)init;
- (void)loadView;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_updateViewIntrinsicContentSize:(struct CGSize)arg1;
- (void)wrapRemoteViewController:(id)arg1;

@end
