/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUConversationParticipant.h>

@class TUHandle;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic) long long streamToken;

+ (_Bool)supportsSecureCoding;

@end
