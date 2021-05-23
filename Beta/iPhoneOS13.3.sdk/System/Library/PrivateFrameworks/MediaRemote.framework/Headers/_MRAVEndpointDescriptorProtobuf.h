/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable

{
    int _connectionType;
    _MRAVOutputDeviceDescriptorProtobuf *_designatedGroupLeader;
    NSString *_instanceIdentifier;
    NSString *_name;
    NSMutableArray *_outputDevices;
    NSMutableArray *_personalOutputDevices;
    NSString *_uniqueIdentifier;
    _Bool _canModifyGroupMembership;
    _Bool _isLocalEndpoint;
    _Bool _isProxyGroupPlayer;
    struct {
        unsigned int connectionType:1;
        unsigned int canModifyGroupMembership:1;
        unsigned int isLocalEndpoint:1;
        unsigned int isProxyGroupPlayer:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (nonatomic, readonly) _Bool hasDesignatedGroupLeader;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader;
@property (nonatomic) _Bool hasIsLocalEndpoint;
@property (nonatomic) _Bool isLocalEndpoint;
@property (nonatomic, readonly) _Bool hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) _Bool hasIsProxyGroupPlayer;
@property (nonatomic) _Bool isProxyGroupPlayer;
@property (nonatomic) _Bool hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) _Bool hasCanModifyGroupMembership;
@property (nonatomic) _Bool canModifyGroupMembership;
@property (retain, nonatomic) NSMutableArray *personalOutputDevices;

+ (Class)outputDevicesType;
+ (Class)personalOutputDevicesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
- (int)StringAsConnectionType:(id)arg1;
- (void)addOutputDevices:(id)arg1;
- (void)addPersonalOutputDevices:(id)arg1;
- (unsigned long long)outputDevicesCount;
- (void)clearOutputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalOutputDevicesCount;
- (void)clearPersonalOutputDevices;
- (id)personalOutputDevicesAtIndex:(unsigned long long)arg1;

@end
