/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncStatus : PBCodable <Swift>

{
    NSMutableArray *_anchors;
    int _statusCode;
    struct {
        unsigned int statusCode:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *anchors;

+ (id)statusWithStatusCode:(int)arg1;
+ (Class)anchorsType;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)persistentUserInfoKey;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (unsigned long long)anchorCount;
- (id)nanoSyncDescription;
- (void)clearAnchors;
- (void)addAnchors:(id)arg1;
- (unsigned long long)anchorsCount;
- (id)anchorsAtIndex:(unsigned long long)arg1;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (id)copyForPersistentUserInfo;

@end
