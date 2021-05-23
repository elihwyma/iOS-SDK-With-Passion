/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSData, NSString;

@interface MPPMediaPredicateValue : PBCodable <Swift>

{
    double _doublePredicateValue;
    long long _integerPredicateValue;
    NSData *_bytesPredicateValue;
    float _floatPredicateValue;
    NSString *_stringPredicateValue;
    int _type;
    _Bool _boolPredicateValue;
    struct {
        unsigned int doublePredicateValue:1;
        unsigned int integerPredicateValue:1;
        unsigned int floatPredicateValue:1;
        unsigned int boolPredicateValue:1;
    } _has;
}

@property (nonatomic) int type;
@property (nonatomic) _Bool hasIntegerPredicateValue;
@property (nonatomic) long long integerPredicateValue;
@property (nonatomic) _Bool hasDoublePredicateValue;
@property (nonatomic) double doublePredicateValue;
@property (nonatomic) _Bool hasFloatPredicateValue;
@property (nonatomic) float floatPredicateValue;
@property (nonatomic) _Bool hasBoolPredicateValue;
@property (nonatomic) _Bool boolPredicateValue;
@property (nonatomic, readonly) _Bool hasStringPredicateValue;
@property (retain, nonatomic) NSString *stringPredicateValue;
@property (nonatomic, readonly) _Bool hasBytesPredicateValue;
@property (retain, nonatomic) NSData *bytesPredicateValue;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
