/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPPostedBy : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_nickname;
    NSString *_userDsid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _role;
    struct {
        unsigned int has_role:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nickname:1;
        unsigned int read_userDsid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_nickname:1;
        unsigned int wrote_userDsid:1;
        unsigned int wrote_role:1;
    } _flags;
}

@property (nonatomic) _Bool hasRole;
@property (nonatomic) int role;
@property (nonatomic, readonly) _Bool hasUserDsid;
@property (retain, nonatomic) NSString *userDsid;
@property (nonatomic, readonly) _Bool hasNickname;
@property (retain, nonatomic) NSString *nickname;
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
- (void)_readUserDsid;
- (void)_readNickname;
- (id)roleAsString:(int)arg1;
- (int)StringAsRole:(id)arg1;

@end
