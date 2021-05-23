/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBRecordBase;

@interface NTPBResourceRecord : PBCodable

{
    NTPBRecordBase *_base;
    NSString *_encoding;
    NSString *_mimeType;
    NSString *_url;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic, readonly) _Bool hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (nonatomic, readonly) _Bool hasEncoding;
@property (retain, nonatomic) NSString *encoding;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
