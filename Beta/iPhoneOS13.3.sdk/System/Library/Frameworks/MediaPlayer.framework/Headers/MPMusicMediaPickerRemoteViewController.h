/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/_UIRemoteViewController.h>

@class MPMediaPickerController, NSString;

@interface MPMusicMediaPickerRemoteViewController : _UIRemoteViewController

{
    MPMediaPickerController *_mediaPickerController;
}

@property (weak, nonatomic) MPMediaPickerController *mediaPickerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1;

@end
