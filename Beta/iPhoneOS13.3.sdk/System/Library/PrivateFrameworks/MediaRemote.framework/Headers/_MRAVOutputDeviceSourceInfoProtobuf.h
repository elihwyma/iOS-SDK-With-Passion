/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable

{
    NSString *_routingContextUID;
    _Bool _multipleBuiltInDevices;
    struct {
        unsigned int multipleBuiltInDevices:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRoutingContextUID;
@property (retain, nonatomic) NSString *routingContextUID;
@property (nonatomic) _Bool hasMultipleBuiltInDevices;
@property (nonatomic) _Bool multipleBuiltInDevices;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
