/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterFlow.h>

@class NSUUID, NWEndpoint;

@interface NEFilterSocketFlow : NEFilterFlow

{
    struct sockaddr_storage _lastLocalAddress;
    struct sockaddr_storage _lastRemoteAddress;
    long long _generateIdentifierOnce;
    int _socketFamily;
    int _socketType;
    int _socketProtocol;
    NWEndpoint *_remoteEndpoint;
    NWEndpoint *_localEndpoint;
    NSUUID *_uuid;
    NSUUID *_euuid;
    unsigned long long _socketID;
    NSUUID *_socketUUID;
}

@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSUUID *euuid;
@property (copy) NWEndpoint *localEndpoint;
@property (copy) NWEndpoint *remoteEndpoint;
@property int socketFamily;
@property int socketType;
@property int socketProtocol;
@property unsigned long long socketID;
@property (readonly) NSUUID *socketUUID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char [16])arg6 euuid:(unsigned char [16])arg7 socketID:(unsigned long long)arg8;
- (void)lastLocalAddress:(struct sockaddr *)arg1;
- (void)lastRemoteAddress:(struct sockaddr *)arg1;

@end
