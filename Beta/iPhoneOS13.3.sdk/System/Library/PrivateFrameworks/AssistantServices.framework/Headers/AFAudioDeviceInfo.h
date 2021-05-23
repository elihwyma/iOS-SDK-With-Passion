/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <Swift>

{
    _Bool _isRemoteDevice;
    NSString *_route;
    NSUUID *_deviceUID;
}

@property (copy, nonatomic, readonly) NSString *route;
@property (nonatomic, readonly) _Bool isRemoteDevice;
@property (copy, nonatomic, readonly) NSUUID *deviceUID;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 deviceUID:(id)arg3;

@end
