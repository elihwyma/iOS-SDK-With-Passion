/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject

{
    AVAudioPlayerNode *_player;
    AVAudioUnitTimePitch *_timePitch;
}

@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioUnitTimePitch *timePitch;

- (id)init;
- (void)connectToEngine:(id)arg1;
- (void)disconnectFromEngine:(id)arg1;
- (_Bool)beginPlayback:(id)arg1 withError:(id *)arg2;

@end
