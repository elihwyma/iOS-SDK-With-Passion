/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <Swift>

{
    NSMutableArray *_futures;
    NSMutableArray *_pasts;
}

@property (retain, nonatomic) NSMutableArray *pasts;
@property (retain, nonatomic) NSMutableArray *futures;

+ (Class)pastType;
+ (Class)futureType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPast:(id)arg1;
- (void)addFuture:(id)arg1;
- (unsigned long long)pastsCount;
- (void)clearPasts;
- (id)pastAtIndex:(unsigned long long)arg1;
- (unsigned long long)futuresCount;
- (void)clearFutures;
- (id)futureAtIndex:(unsigned long long)arg1;

@end
