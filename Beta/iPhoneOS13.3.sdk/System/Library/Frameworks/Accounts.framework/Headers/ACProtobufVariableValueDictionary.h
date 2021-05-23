/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueDictionary : PBCodable

{
    NSMutableArray *_pairs;
}

@property (copy, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)pairsCount;
- (void)addPair:(id)arg1;
- (void)clearPairs;
- (id)pairAtIndex:(unsigned long long)arg1;

@end
