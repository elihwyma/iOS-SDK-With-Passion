/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface _MRLanguageOptionProtobuf : PBCodable

{
    NSMutableArray *_characteristics;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_languageTag;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSMutableArray *characteristics;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

+ (Class)characteristicsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCharacteristics:(id)arg1;
- (unsigned long long)characteristicsCount;
- (void)clearCharacteristics;
- (id)characteristicsAtIndex:(unsigned long long)arg1;

@end
