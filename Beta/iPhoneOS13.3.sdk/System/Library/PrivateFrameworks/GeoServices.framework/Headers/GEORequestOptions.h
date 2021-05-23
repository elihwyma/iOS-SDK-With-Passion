/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSArray, NSMutableArray, PBUnknownFields;

@protocol GEOSurchargeType;

__attribute__((visibility("hidden")))
@interface GEORequestOptions : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_requestOptions;
    int _optionUsed;
    struct {
        unsigned int has_optionUsed:1;
    } _flags;
}

@property (nonatomic, readonly) NSArray *surchargeTypes;
@property (nonatomic, readonly) unsigned long long selectedSurchargeTypeIndex;
@property (nonatomic, readonly) id <GEOSurchargeType> selectedSurchargeType;
@property (retain, nonatomic) NSMutableArray *requestOptions;
@property (nonatomic) _Bool hasOptionUsed;
@property (nonatomic) int optionUsed;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)requestOptionType;

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
- (void)addRequestOption:(id)arg1;
- (unsigned long long)requestOptionsCount;
- (void)clearRequestOptions;
- (id)requestOptionAtIndex:(unsigned long long)arg1;

@end
