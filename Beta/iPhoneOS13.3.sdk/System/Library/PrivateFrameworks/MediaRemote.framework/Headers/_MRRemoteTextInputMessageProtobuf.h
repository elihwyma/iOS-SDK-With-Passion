/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _MRRemoteTextInputMessageProtobuf : PBCodable

{
    double _timestamp;
    unsigned long long _version;
    NSData *_data;
    struct {
        unsigned int timestamp:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic, readonly) _Bool hasData;
@property (retain, nonatomic) NSData *data;

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
