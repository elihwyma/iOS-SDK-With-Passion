/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingLabelSupportPair : PBCodable

{
    unsigned long long _label;
    float _support;
    struct {
        unsigned int label:1;
        unsigned int support:1;
    } _has;
}

@property (nonatomic) _Bool hasLabel;
@property (nonatomic) unsigned long long label;
@property (nonatomic) _Bool hasSupport;
@property (nonatomic) float support;

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
