/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableCategoryDomainDictionary : PBCodable <Swift>

{
    long long _category;
    NSString *_domain;
    NSMutableArray *_keyValuePairs;
    struct {
        unsigned int category:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasCategory;
@property (nonatomic) long long category;
@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (id)initWithCategory:(long long)arg1 domain:(id)arg2;
- (long long)decodedCategory;
- (_Bool)_validateForInsertionWithError:(id *)arg1;

@end
