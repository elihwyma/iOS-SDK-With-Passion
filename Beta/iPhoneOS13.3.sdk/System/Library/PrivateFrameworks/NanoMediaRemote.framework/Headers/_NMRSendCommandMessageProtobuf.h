/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _NMRCommandOptionsProtobuf;

__attribute__((visibility("hidden")))
@interface _NMRSendCommandMessageProtobuf : PBCodable

{
    double _timestamp;
    NSString *_bundleID;
    int _command;
    _NMRCommandOptionsProtobuf *_options;
    int _originIdentifier;
    struct {
        unsigned int timestamp:1;
        unsigned int command:1;
        unsigned int originIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasCommand;
@property (nonatomic) int command;
@property (nonatomic, readonly) _Bool hasOptions;
@property (retain, nonatomic) _NMRCommandOptionsProtobuf *options;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)commandAsString:(int)arg1;
- (int)StringAsCommand:(id)arg1;

@end
