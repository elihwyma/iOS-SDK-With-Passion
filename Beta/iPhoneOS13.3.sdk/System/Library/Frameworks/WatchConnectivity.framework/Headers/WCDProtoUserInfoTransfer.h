/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <PBCodable.h>

@class NSData, NSString;

@interface WCDProtoUserInfoTransfer : PBCodable

{
    NSData *_clientData;
    NSString *_transferIdentifier;
    unsigned int _version;
    struct {
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) _Bool hasClientData;
@property (retain, nonatomic) NSData *clientData;
@property (nonatomic, readonly) _Bool hasTransferIdentifier;
@property (retain, nonatomic) NSString *transferIdentifier;

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
