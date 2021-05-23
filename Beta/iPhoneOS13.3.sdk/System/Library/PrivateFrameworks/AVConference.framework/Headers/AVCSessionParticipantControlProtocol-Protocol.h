/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@class NSData, NSString;

@protocol AVCSessionParticipantControlProtocol <Swift>

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSData *negotiationData;
@property (nonatomic, getter=isAudioMuted) _Bool audioMuted;
@property (nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property (nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSData *frequencyLevels;

@end
