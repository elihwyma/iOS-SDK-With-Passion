/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, _TVCommonSenseView;

__attribute__((visibility("hidden")))
@interface _TVCommonSenseTemplateController : UIViewController

{
    _TVCommonSenseView *_commonSenseView;
    IKViewElement *_templateElement;
}

@property (retain, nonatomic) _TVCommonSenseView *commonSenseView;
@property (retain, nonatomic) IKViewElement *templateElement;

- (void)loadView;
- (void)_loadTemplate;
- (void)_updateHeaderWithElement:(id)arg1;
- (id)_infoTableFromElement:(id)arg1;
- (void)_updateFooterWithElement:(id)arg1;
- (void)updateWithCommonSenseTemplate:(id)arg1;

@end
