/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaPickerController, UIViewController;

@protocol MPMediaPickerRemoteViewLoader <Swift>

@property (weak, nonatomic) MPMediaPickerController *mediaPickerController;
@property (nonatomic, readonly) UIViewController *remoteViewController;

- (unsigned short)synchronizeSettings;
- (unsigned short)requestRemoteViewController;

@end
