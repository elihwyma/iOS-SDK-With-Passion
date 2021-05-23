/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPBookmarkStorage, MSPHistoryEntryStorage, MSPPinStorage, NSString, PBUnknownFields;

@interface MSPCompanionSyncedItem : PBCodable

{
    PBUnknownFields *_unknownFields;
    MSPBookmarkStorage *_bookmark;
    int _changeType;
    MSPPinStorage *_pin;
    MSPHistoryEntryStorage *_searchRequest;
    NSString *_syncId;
    struct {
        unsigned int changeType:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long syChangeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) _Bool hasSyncId;
@property (retain, nonatomic) NSString *syncId;
@property (nonatomic) _Bool hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic, readonly) _Bool hasBookmark;
@property (retain, nonatomic) MSPBookmarkStorage *bookmark;
@property (nonatomic, readonly) _Bool hasPin;
@property (retain, nonatomic) MSPPinStorage *pin;
@property (nonatomic, readonly) _Bool hasSearchRequest;
@property (retain, nonatomic) MSPHistoryEntryStorage *searchRequest;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)syncIdWithPrefix:(id)arg1 identifier:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;

@end
