/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoAccountSourceType : PBCodable

{
    NSString *_accountId;
    unsigned int _fullSyncVersion;
    unsigned int _sourceType;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int sourceType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) _Bool hasSourceType;
@property (nonatomic) unsigned int sourceType;

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
