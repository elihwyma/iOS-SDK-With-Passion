/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPromptForRouteAuthorizationMessageProtobuf : PBCodable

{
    int _inputType;
    _MRAVOutputDeviceDescriptorProtobuf *_route;
    struct {
        unsigned int inputType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRoute;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *route;
@property (nonatomic) _Bool hasInputType;
@property (nonatomic) int inputType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)inputTypeAsString:(int)arg1;
- (int)StringAsInputType:(id)arg1;

@end
