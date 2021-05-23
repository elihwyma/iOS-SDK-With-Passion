/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionDetail : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionLabel;
    NSString *_actionUrlComponent;
    NSString *_actionUrlVerb;
    NSString *_logoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionLabel:1;
        unsigned int read_actionUrlComponent:1;
        unsigned int read_actionUrlVerb:1;
        unsigned int read_logoId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_actionLabel:1;
        unsigned int wrote_actionUrlComponent:1;
        unsigned int wrote_actionUrlVerb:1;
        unsigned int wrote_logoId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasActionLabel;
@property (retain, nonatomic) NSString *actionLabel;
@property (nonatomic, readonly) _Bool hasLogoId;
@property (retain, nonatomic) NSString *logoId;
@property (nonatomic, readonly) _Bool hasActionUrlComponent;
@property (retain, nonatomic) NSString *actionUrlComponent;
@property (nonatomic, readonly) _Bool hasActionUrlVerb;
@property (retain, nonatomic) NSString *actionUrlVerb;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readActionUrlComponent;
- (void)_readActionLabel;
- (void)_readLogoId;
- (void)_readActionUrlVerb;

@end
