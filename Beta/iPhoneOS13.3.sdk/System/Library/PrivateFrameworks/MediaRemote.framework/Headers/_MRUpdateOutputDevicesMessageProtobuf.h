/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable

{
    NSMutableArray *_outputDevices;
}

@property (retain, nonatomic) NSMutableArray *outputDevices;

+ (Class)outputDevicesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addOutputDevices:(id)arg1;
- (unsigned long long)outputDevicesCount;
- (void)clearOutputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;

@end
