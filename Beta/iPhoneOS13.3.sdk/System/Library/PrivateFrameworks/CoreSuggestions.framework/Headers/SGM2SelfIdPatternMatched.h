/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2SelfIdPatternMatched : PBCodable

{
    NSString *_key;
    unsigned int _messageIndex;
    int _nameClass;
    unsigned int _nameTokens;
    NSString *_patternHash;
    int _patternType;
    struct {
        unsigned int messageIndex:1;
        unsigned int nameClass:1;
        unsigned int nameTokens:1;
        unsigned int patternType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasPatternType;
@property (nonatomic) int patternType;
@property (nonatomic, readonly) _Bool hasPatternHash;
@property (retain, nonatomic) NSString *patternHash;
@property (nonatomic) _Bool hasNameTokens;
@property (nonatomic) unsigned int nameTokens;
@property (nonatomic) _Bool hasNameClass;
@property (nonatomic) int nameClass;
@property (nonatomic) _Bool hasMessageIndex;
@property (nonatomic) unsigned int messageIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)patternTypeAsString:(int)arg1;
- (int)StringAsPatternType:(id)arg1;
- (id)nameClassAsString:(int)arg1;
- (int)StringAsNameClass:(id)arg1;

@end
