/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class AVAudioSessionChannelDescription, NSString;

@interface TTSAudioSessionChannel : NSObject

{
    unsigned int _channelLabel;
    AVAudioSessionChannelDescription *_channel;
    NSString *_channelName;
    unsigned long long _channelNumber;
    NSString *_owningPortUID;
}

@property (retain, nonatomic) AVAudioSessionChannelDescription *channel;
@property (retain, nonatomic) NSString *channelName;
@property (nonatomic) unsigned long long channelNumber;
@property (nonatomic) unsigned int channelLabel;
@property (retain, nonatomic) NSString *owningPortUID;

+ (id)channelWithChannel:(id)arg1;
+ (id)convertChannels:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
