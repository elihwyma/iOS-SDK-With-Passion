/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, NSURL, PBUnknownFields;

@interface GEOURLInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _alternativeMultipathTCPPort;
    _Bool _supportsMultipathTCP;
    _Bool _useAuthProxy;
    struct {
        unsigned int has_alternativeMultipathTCPPort:1;
        unsigned int has_supportsMultipathTCP:1;
        unsigned int has_useAuthProxy:1;
    } _flags;
}

@property (nonatomic, readonly) NSURL *nsURL;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) _Bool hasUseAuthProxy;
@property (nonatomic) _Bool useAuthProxy;
@property (nonatomic) _Bool hasSupportsMultipathTCP;
@property (nonatomic) _Bool supportsMultipathTCP;
@property (nonatomic) _Bool hasAlternativeMultipathTCPPort;
@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
