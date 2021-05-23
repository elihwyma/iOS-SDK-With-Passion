/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, VUIErrorView;

__attribute__((visibility("hidden")))
@interface VUIErrorTemplateViewController : UIViewController

{
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic, readonly) VUIErrorView *errorView;

- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithTemplateElement:(id)arg1;

@end
