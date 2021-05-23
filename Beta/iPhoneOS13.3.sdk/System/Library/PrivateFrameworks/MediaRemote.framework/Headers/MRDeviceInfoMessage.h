/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage

{
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedProtocolMessages;

- (unsigned long long)type;
- (unsigned long long)encryptionType;
- (unsigned long long)_lastSupportedMessageType;
- (unsigned long long)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
- (id)initWithDeviceInfo:(id)arg1;

@end
