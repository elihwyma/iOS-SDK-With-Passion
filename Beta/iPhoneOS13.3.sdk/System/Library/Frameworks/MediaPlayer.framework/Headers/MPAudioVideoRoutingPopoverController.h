/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIPopoverController.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController

{
    int _airPlayPasswordAlertDidAppearToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _mirroringIncluded;
    MPAVRoutingViewController *_routingViewController;
    _Bool _mirroringOnly;
}

@property (nonatomic) _Bool mirroringOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)routingController;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (id)initWithType:(long long)arg1 includeMirroring:(_Bool)arg2;

@end
