/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject

{
    void *_impl;
}

@property (readonly) NSString *channelName;
@property (readonly) NSString *owningPortUID;
@property (readonly) unsigned long long channelNumber;
@property (readonly) unsigned int channelLabel;

+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned int)arg3;
+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct ChannelDescriptionImpl *)privateGetImplementation;
- (_Bool)isEqualToChannel:(id)arg1;

@end
