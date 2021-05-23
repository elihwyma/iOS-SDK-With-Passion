/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPArchiveRecordsRequest : PBRequest

{
    NSMutableArray *_idsToArchives;
}

@property (retain, nonatomic) NSMutableArray *idsToArchives;

+ (id)options;
+ (Class)idsToArchiveType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addIdsToArchive:(id)arg1;
- (unsigned long long)idsToArchivesCount;
- (void)clearIdsToArchives;
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;

@end
