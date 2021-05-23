/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueList : PBCodable

{
    NSMutableArray *_values;
}

@property (copy, nonatomic) NSArray *array;
@property (copy, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addValue:(id)arg1;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (id)_convertArray:(id)arg1;

@end
