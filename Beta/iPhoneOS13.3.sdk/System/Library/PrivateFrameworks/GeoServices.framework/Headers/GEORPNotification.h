/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEORPNotification : PBCodable

{
    PBDataReader *_reader;
    NSString *_localizedText;
    NSString *_localizedTitle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_localizedText:1;
        unsigned int read_localizedTitle:1;
        unsigned int wrote_localizedText:1;
        unsigned int wrote_localizedTitle:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (nonatomic, readonly) _Bool hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;

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
- (void)_readLocalizedText;
- (void)_readLocalizedTitle;

@end
