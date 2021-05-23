/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject

{
    _Bool _isRemoteDevice;
    NSString *_route;
    NSUUID *_remoteDeviceUID;
    NSString *_remoteDeviceProductIdentifier;
}

@property (copy, nonatomic, readonly) NSString *route;
@property (nonatomic, readonly) _Bool isRemoteDevice;
@property (copy, nonatomic, readonly) NSUUID *remoteDeviceUID;
@property (copy, nonatomic, readonly) NSString *remoteDeviceProductIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)xpcObject;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;

@end
