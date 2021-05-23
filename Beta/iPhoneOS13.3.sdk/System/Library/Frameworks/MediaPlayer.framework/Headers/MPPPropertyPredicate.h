/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPPMediaPredicateValue, NSString;

@interface MPPPropertyPredicate : PBCodable <Swift>

{
    int _comparisonType;
    NSString *_property;
    MPPMediaPredicateValue *_value;
    struct {
        unsigned int comparisonType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasProperty;
@property (retain, nonatomic) NSString *property;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) MPPMediaPredicateValue *value;
@property (nonatomic) _Bool hasComparisonType;
@property (nonatomic) int comparisonType;

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
