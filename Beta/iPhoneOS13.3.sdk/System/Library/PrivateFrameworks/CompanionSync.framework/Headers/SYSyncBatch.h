/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, SYMessageHeader;

@interface SYSyncBatch : PBCodable

{
    unsigned long long _index;
    NSMutableArray *_changes;
    SYMessageHeader *_header;
    NSString *_sessionID;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;

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
