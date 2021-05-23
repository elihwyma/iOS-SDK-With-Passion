/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPAVRoutingViewController, NSString, UIButton, UIWindow;

@interface MPAVRoutingSheet : UIView

{
    UIWindow *_presentationWindow;
    UIView *_backgroundView;
    UIButton *_dismissBackgroundButton;
    UIButton *_dismissControlsViewButton;
    UIView *_controlsView;
    UIButton *_cancelButton;
    MPAVRoutingViewController *_routingViewController;
    CDUnknownBlockType _completionHandler;
    _Bool _mirroringOnly;
}

@property (nonatomic, setter=setAVItemType:) long long avItemType;
@property (nonatomic) _Bool mirroringOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dismiss;
- (void)tintColorDidChange;
- (id)initWithAVItemType:(long long)arg1;
- (void)showInView:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_animateControls:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRoutingSheetFrame;
- (void)_updateDismissButtonText;
- (struct CGRect)_routingViewFrame;
- (struct CGRect)_cancelButtonFrame;
- (struct CGRect)_controlsViewFrame;
- (struct CGSize)_maxRoutingViewSize;

@end
