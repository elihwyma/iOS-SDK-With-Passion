/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOCondition, GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@protocol GEOServerCondition, GEOServerFormattedString;

@interface GEOConditionalFormattedString : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCondition *_condition;
    GEOFormattedString *_formattedString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_condition:1;
        unsigned int read_formattedString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_condition:1;
        unsigned int wrote_formattedString:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <GEOServerFormattedString> formattedString;
@property (nonatomic, readonly) id <GEOServerCondition> condition;
@property (nonatomic, readonly) _Bool hasFormattedString;
@property (retain, nonatomic) GEOFormattedString *formattedString;
@property (nonatomic, readonly) _Bool hasCondition;
@property (retain, nonatomic) GEOCondition *condition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readFormattedString;
- (void)_readCondition;

@end
