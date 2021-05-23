/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSSet, NSString, PBUnknownFields;

@interface MSPTransitStorageIncidentEntity : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _nextStopsMuids;
    unsigned long long _muid;
    CDStruct_e99c65f7 _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasNextStopIDs;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) unsigned long long nextStopsMuidsCount;
@property (nonatomic, readonly) unsigned long long *nextStopsMuids;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithIncidentEntity:(id)arg1;
- (void)addNextStopsMuids:(unsigned long long)arg1;
- (unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)arg1;
- (void)clearNextStopsMuids;
- (void)setNextStopsMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
