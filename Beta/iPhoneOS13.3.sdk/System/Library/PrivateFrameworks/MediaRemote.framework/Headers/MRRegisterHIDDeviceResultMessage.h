/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) unsigned long long deviceIdentifier;

- (unsigned long long)type;
- (id)initWithErrorCode:(long long)arg1 deviceIdentifier:(unsigned long long)arg2;

@end
