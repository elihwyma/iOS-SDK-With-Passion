/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPAddressCorrections, GEORPAmenityCorrections, GEORPCategoryCorrections, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPPoiCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCategoryCorrections *_category;
    NSString *_hoursText;
    NSString *_name;
    NSString *_originalName;
    NSString *_originalPhone;
    NSString *_originalUrl;
    NSString *_phone;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _flagHoursIncorrect;
    _Bool _flagNotAtThisAddress;
    struct {
        unsigned int has_flagHoursIncorrect:1;
        unsigned int has_flagNotAtThisAddress:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_amenity:1;
        unsigned int read_businessHours:1;
        unsigned int read_category:1;
        unsigned int read_hoursText:1;
        unsigned int read_name:1;
        unsigned int read_originalName:1;
        unsigned int read_originalPhone:1;
        unsigned int read_originalUrl:1;
        unsigned int read_phone:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_amenity:1;
        unsigned int wrote_businessHours:1;
        unsigned int wrote_category:1;
        unsigned int wrote_hoursText:1;
        unsigned int wrote_name:1;
        unsigned int wrote_originalName:1;
        unsigned int wrote_originalPhone:1;
        unsigned int wrote_originalUrl:1;
        unsigned int wrote_phone:1;
        unsigned int wrote_url:1;
        unsigned int wrote_flagHoursIncorrect:1;
        unsigned int wrote_flagNotAtThisAddress:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasPhone;
@property (retain, nonatomic) NSString *phone;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) GEORPCategoryCorrections *category;
@property (nonatomic, readonly) _Bool hasAmenity;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (nonatomic) _Bool hasFlagHoursIncorrect;
@property (nonatomic) _Bool flagHoursIncorrect;
@property (nonatomic) _Bool hasFlagNotAtThisAddress;
@property (nonatomic) _Bool flagNotAtThisAddress;
@property (nonatomic, readonly) _Bool hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (nonatomic, readonly) _Bool hasOriginalPhone;
@property (retain, nonatomic) NSString *originalPhone;
@property (nonatomic, readonly) _Bool hasOriginalUrl;
@property (retain, nonatomic) NSString *originalUrl;
@property (nonatomic, readonly) _Bool hasHoursText;
@property (retain, nonatomic) NSString *hoursText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)businessHoursType;

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
- (void)_readCategory;
- (void)_readName;
- (void)_readAddress;
- (void)_readUrl;
- (void)_readAmenity;
- (void)_readBusinessHours;
- (void)_addNoFlagsBusinessHours:(id)arg1;
- (void)_readOriginalName;
- (unsigned long long)businessHoursCount;
- (void)clearBusinessHours;
- (id)businessHoursAtIndex:(unsigned long long)arg1;
- (void)addBusinessHours:(id)arg1;
- (void)_readPhone;
- (void)_readOriginalPhone;
- (void)_readOriginalUrl;
- (void)_readHoursText;

@end
