/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <Swift>

{
    NSMutableArray *_changes;
}

@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;
+ (id)changeSetWithChanges:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)addChanges:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (id)changesAtIndex:(unsigned long long)arg1;

@end
