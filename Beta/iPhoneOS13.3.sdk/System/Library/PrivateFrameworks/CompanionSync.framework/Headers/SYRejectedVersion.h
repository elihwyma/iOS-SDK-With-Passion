/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString, SYMessageHeader;

@interface SYRejectedVersion : PBCodable

{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedVersions;
    SYMessageHeader *_header;
    NSString *_inReplyTo;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *inReplyTo;
@property (nonatomic, readonly) unsigned long long supportedVersionsCount;
@property (nonatomic, readonly) unsigned int *supportedVersions;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setSupportedVersions:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)supportedVersionsAtIndex:(unsigned long long)arg1;
- (void)clearSupportedVersions;
- (void)addSupportedVersions:(unsigned int)arg1;

@end
