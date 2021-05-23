/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream

{
    NSMutableSet *_supportedAudioPayloads;
}

@property (retain, nonatomic) NSSet *supportedAudioPayloads;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addPayload:(int)arg1;

@end
