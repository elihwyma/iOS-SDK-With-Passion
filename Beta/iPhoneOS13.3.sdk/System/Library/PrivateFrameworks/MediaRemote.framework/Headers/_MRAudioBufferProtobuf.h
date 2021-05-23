/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRAudioBufferProtobuf : PBCodable

{
    long long _maximumPacketSize;
    long long _packetCapacity;
    long long _packetCount;
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    NSMutableArray *_packetDescriptions;
    struct {
        unsigned int maximumPacketSize:1;
        unsigned int packetCapacity:1;
        unsigned int packetCount:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFormatSettings;
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings;
@property (nonatomic) _Bool hasPacketCapacity;
@property (nonatomic) long long packetCapacity;
@property (nonatomic) _Bool hasMaximumPacketSize;
@property (nonatomic) long long maximumPacketSize;
@property (nonatomic) _Bool hasPacketCount;
@property (nonatomic) long long packetCount;
@property (nonatomic, readonly) _Bool hasContents;
@property (retain, nonatomic) NSData *contents;
@property (retain, nonatomic) NSMutableArray *packetDescriptions;

+ (Class)packetDescriptionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPacketDescriptions:(id)arg1;
- (unsigned long long)packetDescriptionsCount;
- (void)clearPacketDescriptions;
- (id)packetDescriptionsAtIndex:(unsigned long long)arg1;

@end
