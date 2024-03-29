/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSData, NSString, SYErrorInfo, SYMessageHeader;

@interface SYStartSyncSessionResponse : PBCodable

{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_sessionID;
    _Bool _accepted;
    _Bool _supportsRestart;
    _Bool _supportsRollback;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) _Bool accepted;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) SYErrorInfo *error;
@property (nonatomic) _Bool supportsRollback;
@property (nonatomic) _Bool supportsRestart;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) NSData *metadata;

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
