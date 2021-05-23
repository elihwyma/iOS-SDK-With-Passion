/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <Swift>

{
    NSMutableArray *_codedValues;
}

@property (retain, nonatomic) NSMutableArray *codedValues;

+ (Class)codedValuesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCodedValues:(id)arg1;
- (unsigned long long)codedValuesCount;
- (void)clearCodedValues;
- (id)codedValuesAtIndex:(unsigned long long)arg1;

@end
