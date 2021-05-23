/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _DKPRSource, _DKPRStream, _DKPRValue;

@interface _DKPREvent : PBCodable

{
    double _creationDate;
    double _endDate;
    double _startDate;
    NSString *_identifier;
    NSMutableArray *_metadatas;
    _DKPRSource *_source;
    _DKPRStream *_stream;
    _DKPRValue *_value;
    struct {
        unsigned int creationDate:1;
    } _has;
}

@property (retain, nonatomic) _DKPRStream *stream;
@property (nonatomic) double startDate;
@property (nonatomic) double endDate;
@property (retain, nonatomic) _DKPRValue *value;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasSource;
@property (retain, nonatomic) _DKPRSource *source;
@property (retain, nonatomic) NSMutableArray *metadatas;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;

+ (Class)metadataType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMetadata:(id)arg1;
- (unsigned long long)metadatasCount;
- (void)clearMetadatas;
- (id)metadataAtIndex:(unsigned long long)arg1;

@end
