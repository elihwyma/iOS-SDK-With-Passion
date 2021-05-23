/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *hostName;
@property (nonatomic) long long hostPort;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic) _Bool paired;
@property (nonatomic) _Bool usingSystemPairing;

@end
