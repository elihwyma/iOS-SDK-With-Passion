/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSString, PBUnknownFields;

@protocol GEOServerFormattedString;

@interface GEORequestOption : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_name;
    int _enumValue;
    struct {
        unsigned int has_enumValue:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int value;
@property (nonatomic, readonly) id <GEOServerFormattedString> formattedName;
@property (nonatomic) _Bool hasEnumValue;
@property (nonatomic) int enumValue;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) GEOFormattedString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
