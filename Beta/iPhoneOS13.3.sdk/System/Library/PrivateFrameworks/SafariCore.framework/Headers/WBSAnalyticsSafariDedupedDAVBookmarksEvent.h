/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariDedupedDAVBookmarksEvent : PBCodable

{
    unsigned long long _dedupeCount;
    unsigned long long _foldersWithDupesCount;
    unsigned long long _timestamp;
    struct {
        unsigned int dedupeCount:1;
        unsigned int foldersWithDupesCount:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDedupeCount;
@property (nonatomic) unsigned long long dedupeCount;
@property (nonatomic) _Bool hasFoldersWithDupesCount;
@property (nonatomic) unsigned long long foldersWithDupesCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
