/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBEnvelope : PBCodable

{
    NSData *_content;
    int _contentType;
    int _contentTypeMinorVersion;
    int _contentTypePatchVersion;
    int _contentTypeVersion;
    NSData *_identifier;
    struct {
        unsigned int contentTypeMinorVersion:1;
        unsigned int contentTypePatchVersion:1;
    } _has;
}

@property (nonatomic) int contentTypeVersion;
@property (nonatomic) int contentType;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) _Bool hasContentTypeMinorVersion;
@property (nonatomic) int contentTypeMinorVersion;
@property (nonatomic) _Bool hasContentTypePatchVersion;
@property (nonatomic) int contentTypePatchVersion;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
