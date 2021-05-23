/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIWindow.h>

@class ICViewControllerManager;

@interface ICWindow : UIWindow

{
    ICViewControllerManager *_viewControllerManager;
}

@property (retain, nonatomic) ICViewControllerManager *viewControllerManager;

- (id)initWithWindowScene:(id)arg1;
- (id)ic_viewControllerManager;

@end
