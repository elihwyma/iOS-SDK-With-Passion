/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface _MPMusicPlayerQueueTransaction : NSObject

{
    long long _state;
    CDUnknownBlockType _completion;
}

@property (nonatomic) long long state;
@property (nonatomic, readonly) CDUnknownBlockType completion;
@property (nonatomic, readonly) id identifier;

- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end
