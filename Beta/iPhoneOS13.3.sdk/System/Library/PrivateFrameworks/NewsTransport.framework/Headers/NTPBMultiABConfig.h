/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBMultiABConfig : PBCodable

{
    long long _moduloForHashing;
    NSMutableArray *_abConfigs;
    NTPBConfig *_defaultConfig;
    CDStruct_3f5c4e18 _has;
}

@property (nonatomic, readonly) _Bool hasDefaultConfig;
@property (retain, nonatomic) NTPBConfig *defaultConfig;
@property (nonatomic) _Bool hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (retain, nonatomic) NSMutableArray *abConfigs;

+ (Class)abConfigsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addAbConfigs:(id)arg1;
- (void)clearAbConfigs;
- (unsigned long long)abConfigsCount;
- (id)abConfigsAtIndex:(unsigned long long)arg1;

@end
