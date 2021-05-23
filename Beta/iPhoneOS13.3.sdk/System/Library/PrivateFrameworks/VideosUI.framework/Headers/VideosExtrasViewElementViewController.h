/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasElementViewController.h>

@class IKViewElement;

__attribute__((visibility("hidden")))
@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController

{
    _Bool _embedded;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic, readonly) _Bool matchParentHeight;
@property (nonatomic) _Bool embedded;
@property (nonatomic, readonly) id preferredLayoutGuide;
@property (nonatomic, readonly) long long preferredLayoutAttribute;

- (void)viewDidLoad;
- (id)initWithViewElement:(id)arg1;

@end
