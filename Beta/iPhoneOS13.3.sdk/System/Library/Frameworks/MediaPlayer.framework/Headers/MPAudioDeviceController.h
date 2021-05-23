/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPAudioDeviceController : NSObject

{
    id _delegate;
}

@property (weak, nonatomic) id delegate;

- (_Bool)wirelessRouteIsPicked;

@end
