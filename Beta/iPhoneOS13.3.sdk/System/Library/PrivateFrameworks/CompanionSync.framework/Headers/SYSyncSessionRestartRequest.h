/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBRequest.h>

@class NSString, SYMessageHeader;

@interface SYSyncSessionRestartRequest : PBRequest

{
    SYMessageHeader *_header;
    NSString *_sessionID;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *sessionID;

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
