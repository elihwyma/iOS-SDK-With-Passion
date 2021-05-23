/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader, NSString;

@interface NPKProtoStandaloneInitializationResponse : PBCodable

{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedServerVersions;
    NSString *_clientInfoHTTPHeader;
    NPKProtoStandaloneError *_error;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (nonatomic, readonly) unsigned long long supportedServerVersionsCount;
@property (nonatomic, readonly) int *supportedServerVersions;
@property (nonatomic, readonly) _Bool hasClientInfoHTTPHeader;
@property (retain, nonatomic) NSString *clientInfoHTTPHeader;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) NPKProtoStandaloneError *error;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSupportedServerVersions:(int)arg1;
- (void)clearSupportedServerVersions;
- (int)supportedServerVersionsAtIndex:(unsigned long long)arg1;
- (void)setSupportedServerVersions:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedServerVersionsAsString:(int)arg1;
- (int)StringAsSupportedServerVersions:(id)arg1;

@end
