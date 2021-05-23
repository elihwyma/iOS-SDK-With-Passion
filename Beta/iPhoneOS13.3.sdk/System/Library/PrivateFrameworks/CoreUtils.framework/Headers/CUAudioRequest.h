/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class AVAudioPlayer, NSString;

__attribute__((visibility("hidden")))
@interface CUAudioRequest : NSObject

{
    AVAudioPlayer *_audioPlayer;
    CDUnknownBlockType _completion;
    NSString *_label;
}

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) NSString *label;

@end
