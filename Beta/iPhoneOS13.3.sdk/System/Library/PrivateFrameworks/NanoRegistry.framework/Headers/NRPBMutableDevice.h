/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <Swift>

{
    NSMutableArray *_names;
    NSMutableArray *_properties;
}

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *properties;

+ (Class)propertiesType;
+ (Class)namesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addProperties:(id)arg1;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (void)clearNames;
- (void)addNames:(id)arg1;
- (id)namesAtIndex:(unsigned long long)arg1;

@end
