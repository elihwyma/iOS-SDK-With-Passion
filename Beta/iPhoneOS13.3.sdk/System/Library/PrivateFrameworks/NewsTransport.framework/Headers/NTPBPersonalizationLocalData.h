/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBPersonalizationLocalData : PBCodable

{
    NSMutableArray *_closedChangeGroups;
    NSString *_currentInstanceIdentifier;
    NSMutableArray *_openChangeGroupDeltas;
    NSData *_remoteRecordData;
}

@property (retain, nonatomic) NSMutableArray *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (nonatomic, readonly) _Bool hasRemoteRecordData;
@property (retain, nonatomic) NSData *remoteRecordData;
@property (nonatomic, readonly) _Bool hasCurrentInstanceIdentifier;
@property (retain, nonatomic) NSString *currentInstanceIdentifier;

+ (Class)openChangeGroupDeltasType;
+ (Class)closedChangeGroupsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addOpenChangeGroupDeltas:(id)arg1;
- (void)addClosedChangeGroups:(id)arg1;
- (void)clearOpenChangeGroupDeltas;
- (unsigned long long)openChangeGroupDeltasCount;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1;
- (void)clearClosedChangeGroups;
- (unsigned long long)closedChangeGroupsCount;
- (id)closedChangeGroupsAtIndex:(unsigned long long)arg1;

@end
