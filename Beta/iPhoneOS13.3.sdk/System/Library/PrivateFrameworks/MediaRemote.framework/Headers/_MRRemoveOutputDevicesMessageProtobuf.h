/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable

{
    NSMutableArray *_outputDeviceUIDs;
}

@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs;

+ (Class)outputDeviceUIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addOutputDeviceUIDs:(id)arg1;
- (unsigned long long)outputDeviceUIDsCount;
- (void)clearOutputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)arg1;

@end
