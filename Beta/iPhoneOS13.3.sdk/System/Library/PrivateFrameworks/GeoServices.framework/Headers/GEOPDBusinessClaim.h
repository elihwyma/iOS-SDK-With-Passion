/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDBusinessClaim : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonLabel;
    NSString *_descriptionText;
    NSString *_titleText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _buttonEnabled;
    struct {
        unsigned int has_buttonEnabled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_buttonLabel:1;
        unsigned int read_descriptionText:1;
        unsigned int read_titleText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buttonLabel:1;
        unsigned int wrote_descriptionText:1;
        unsigned int wrote_titleText:1;
        unsigned int wrote_buttonEnabled:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasButtonLabel;
@property (retain, nonatomic) NSString *buttonLabel;
@property (nonatomic) _Bool hasButtonEnabled;
@property (nonatomic) _Bool buttonEnabled;
@property (nonatomic, readonly) _Bool hasTitleText;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic, readonly) _Bool hasDescriptionText;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)businessClaimForPlaceData:(id)arg1;

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
- (void)_readButtonLabel;
- (void)_readTitleText;
- (void)_readDescriptionText;

@end
