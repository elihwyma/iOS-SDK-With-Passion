//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NNMKProtoMailboxSelection : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSMutableArray *_mailboxes;
    CDStruct_a125a100 _has;
}

+ (Class)mailboxesType;
+ (id)protoMailboxSelectionFromMailboxSelection:(id)arg1 fullSyncVersion:(NSUInteger)arg2;
@property(retain, nonatomic) NSMutableArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)mailboxesAtIndex:(NSUInteger)arg1;
- (NSUInteger)mailboxesCount;
- (void)addMailboxes:(id)arg1;
- (void)clearMailboxes;
@property(nonatomic) BOOL hasFullSyncVersion;
- (id)mailboxSelection;

@end

