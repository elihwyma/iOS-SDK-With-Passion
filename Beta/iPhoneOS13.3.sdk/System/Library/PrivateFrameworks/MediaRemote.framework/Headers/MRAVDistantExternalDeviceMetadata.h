/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf;

@interface MRAVDistantExternalDeviceMetadata : NSObject

{
    NSString *_name;
    NSString *_hostName;
    long long _hostPort;
    MRSupportedProtocolMessages *_supportedMessages;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    _Bool _paired;
    _Bool _usingSystemPairing;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) long long hostPort;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, readonly) _Bool paired;
@property (nonatomic, readonly) _Bool usingSystemPairing;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;

@end
