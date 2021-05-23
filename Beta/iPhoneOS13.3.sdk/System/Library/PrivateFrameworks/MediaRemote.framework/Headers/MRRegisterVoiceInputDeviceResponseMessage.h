/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int deviceID;
@property (nonatomic, readonly) long long errorCode;

- (unsigned long long)type;
- (id)initWithDeviceID:(unsigned int)arg1 errorCode:(long long)arg2;

@end
