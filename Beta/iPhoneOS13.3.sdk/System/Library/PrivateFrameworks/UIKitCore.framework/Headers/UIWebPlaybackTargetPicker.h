/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class MPAVRoutingController, MPAVRoutingSheet, MPAudioVideoRoutingPopoverController, NSString, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlaybackTargetPicker : UIView

{
    MPAVRoutingController *_routingController;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAVRoutingSheet *_actionSheet;
    UIWebDocumentView *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)show:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowDidRotate:(id)arg1;
- (void)_presentAirPlayPopoverAnimated:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (void)showAirPlayPickerIPad:(long long)arg1 fromRect:(struct CGRect)arg2;
- (void)showAirPlayPickerIPhone:(long long)arg1;

@end
