/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSString, VUIContextMenuCardView;

__attribute__((visibility("hidden")))
@interface VUIContextMenuTemplateController : _TVBgImageLoadingViewController

{
    VUIContextMenuCardView *_cardView;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) VUIContextMenuCardView *cardView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)arg1;
- (void)didSelectPreviewTemplateController;
- (id)_shareActionSheetFromViewElement:(id)arg1;
- (void)_updateInteractionMenuItems:(id)arg1;

@end
