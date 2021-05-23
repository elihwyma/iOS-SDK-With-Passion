/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemStorageUserValues : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSString *_phoneNumber;
    NSData *_timeZoneData;
    NSString *_timeZoneName;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_phoneNumber:1;
        unsigned int read_timeZoneData:1;
        unsigned int read_timeZoneName:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneNumber:1;
        unsigned int wrote_timeZoneData:1;
        unsigned int wrote_timeZoneName:1;
        unsigned int wrote_url:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic, readonly) _Bool hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic, readonly) _Bool hasTimeZoneData;
@property (retain, nonatomic) NSData *timeZoneData;
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
- (void)_readName;
- (void)_readPhoneNumber;
- (void)_readUrl;
- (void)_readTimeZoneName;
- (void)_readTimeZoneData;

@end
