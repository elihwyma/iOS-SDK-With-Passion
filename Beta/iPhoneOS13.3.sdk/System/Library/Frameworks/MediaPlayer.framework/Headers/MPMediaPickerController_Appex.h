/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaPickerController, MPMusicMediaPickerRemoteViewController, NSString, UIViewController, _UIResilientRemoteViewContainerViewController;

@interface MPMediaPickerController_Appex : NSObject

{
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    MPMusicMediaPickerRemoteViewController *_musicRemoteViewController;
    MPMediaPickerController *_mediaPickerController;
    UIViewController *_remoteViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) MPMediaPickerController *mediaPickerController;
@property (nonatomic, readonly) UIViewController *remoteViewController;

- (void)dealloc;
- (void)synchronizeSettings;
- (void)requestRemoteViewController;
- (id)serviceController;

@end
