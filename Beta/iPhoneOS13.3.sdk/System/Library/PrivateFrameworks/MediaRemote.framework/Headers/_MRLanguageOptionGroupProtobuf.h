/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable

{
    _MRLanguageOptionProtobuf *_defaultLanguageOption;
    NSMutableArray *_languageOptions;
    _Bool _allowEmptySelection;
    struct {
        unsigned int allowEmptySelection:1;
    } _has;
}

@property (nonatomic) _Bool hasAllowEmptySelection;
@property (nonatomic) _Bool allowEmptySelection;
@property (nonatomic, readonly) _Bool hasDefaultLanguageOption;
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions;

+ (Class)languageOptionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addLanguageOptions:(id)arg1;
- (unsigned long long)languageOptionsCount;
- (void)clearLanguageOptions;
- (id)languageOptionsAtIndex:(unsigned long long)arg1;

@end
