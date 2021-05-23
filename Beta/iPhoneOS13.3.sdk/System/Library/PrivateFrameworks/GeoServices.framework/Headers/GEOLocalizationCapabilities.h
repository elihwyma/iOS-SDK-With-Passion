/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOLocalizationCapabilities : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedPhoneticTypes;
}

@property (nonatomic, readonly) unsigned long long supportedPhoneticTypesCount;
@property (nonatomic, readonly) int *supportedPhoneticTypes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSupportedPhoneticTypes;
- (int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedPhoneticType:(int)arg1;
- (void)setSupportedPhoneticTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedPhoneticTypesAsString:(int)arg1;
- (int)StringAsSupportedPhoneticTypes:(id)arg1;

@end
