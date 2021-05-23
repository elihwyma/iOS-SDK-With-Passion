/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/_UIRemoteViewController.h>

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController

{
    MPMediaPickerController *_mediaPickerController;
}

@property (weak, nonatomic) MPMediaPickerController *mediaPickerController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;

@end
