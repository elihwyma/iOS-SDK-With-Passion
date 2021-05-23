/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFilterPacketInterpose, NEFlowMetaData, NSData;

@interface NEPacket : NSObject

{
    unsigned char _protocolFamily;
    NSData *_data;
    long long _direction;
    NEFlowMetaData *_metadata;
    void *_context;
    NEFilterPacketInterpose *_interpose;
}

@property void *context;
@property (retain) NEFilterPacketInterpose *interpose;
@property (copy, readonly) NSData *data;
@property (readonly) unsigned char protocolFamily;
@property (readonly) long long direction;
@property (readonly) NEFlowMetaData *metadata;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 metadata:(id)arg3;
- (id)initWithData:(id)arg1 direction:(long long)arg2 context:(void *)arg3 interpose:(id)arg4;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 signingIdentifier:(id)arg3 processUUID:(id)arg4;
- (id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2;

@end
