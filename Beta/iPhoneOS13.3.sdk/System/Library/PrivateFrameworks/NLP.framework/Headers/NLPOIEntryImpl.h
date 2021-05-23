/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLPOIEntryImpl : PBCodable

{
    NSString *_category;
    NSString *_domain;
    NSString *_name;
    float _score;
    struct {
        unsigned int score:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) float score;

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

@end
