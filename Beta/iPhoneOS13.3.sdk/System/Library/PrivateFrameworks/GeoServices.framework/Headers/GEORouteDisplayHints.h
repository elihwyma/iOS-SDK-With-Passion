/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORequestOptions, NSArray, PBDataReader, PBUnknownFields;

@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _availablePaymentTypes;
    CDStruct_95bda58d _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _showTransitSchedules;
    struct {
        unsigned int has_showTransitSchedules:1;
        unsigned int read_unknownFields:1;
        unsigned int read_availablePaymentTypes:1;
        unsigned int read_availablePrioritizations:1;
        unsigned int read_transitSurchargeOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_availablePaymentTypes:1;
        unsigned int wrote_availablePrioritizations:1;
        unsigned int wrote_transitSurchargeOptions:1;
        unsigned int wrote_showTransitSchedules:1;
    } _flags;
}

@property (nonatomic, readonly) id <GEOSurchargeOption> surchargeOptions;
@property (nonatomic, readonly) NSArray *prioritizationOptions;
@property (nonatomic) _Bool hasShowTransitSchedules;
@property (nonatomic) _Bool showTransitSchedules;
@property (nonatomic, readonly) unsigned long long availablePrioritizationsCount;
@property (nonatomic, readonly) int *availablePrioritizations;
@property (nonatomic, readonly) unsigned long long availablePaymentTypesCount;
@property (nonatomic, readonly) int *availablePaymentTypes;
@property (nonatomic, readonly) _Bool hasTransitSurchargeOptions;
@property (retain, nonatomic) GEORequestOptions *transitSurchargeOptions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readAvailablePrioritizations;
- (void)_addNoFlagsAvailablePrioritization:(int)arg1;
- (void)_readAvailablePaymentTypes;
- (void)_addNoFlagsAvailablePaymentType:(int)arg1;
- (void)_readTransitSurchargeOptions;
- (void)clearAvailablePrioritizations;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (void)clearAvailablePaymentTypes;
- (int)availablePaymentTypeAtIndex:(unsigned long long)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)setAvailablePrioritizations:(int *)arg1 count:(unsigned long long)arg2;
- (id)availablePrioritizationsAsString:(int)arg1;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (void)setAvailablePaymentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)availablePaymentTypesAsString:(int)arg1;
- (int)StringAsAvailablePaymentTypes:(id)arg1;

@end
