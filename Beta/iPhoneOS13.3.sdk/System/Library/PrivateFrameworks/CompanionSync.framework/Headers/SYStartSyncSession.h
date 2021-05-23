/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSData, NSString, SYMessageHeader;

@interface SYStartSyncSession : PBCodable

{
    double _sessionTimeout;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_reason;
    NSString *_sessionID;
    _Bool _expectsRestartSupport;
    _Bool _expectsRollbackSupport;
    _Bool _isResetSync;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (nonatomic) _Bool isResetSync;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) _Bool expectsRollbackSupport;
@property (nonatomic) _Bool expectsRestartSupport;
@property (nonatomic) double sessionTimeout;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic, readonly) _Bool hasReason;
@property (retain, nonatomic) NSString *reason;

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
