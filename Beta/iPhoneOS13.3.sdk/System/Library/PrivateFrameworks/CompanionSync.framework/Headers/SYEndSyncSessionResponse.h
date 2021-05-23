/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYEndSyncSessionResponse : PBCodable

{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_sessionID;
    _Bool _didRollback;
    struct {
        unsigned int didRollback:1;
    } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) SYErrorInfo *error;
@property (nonatomic) _Bool hasDidRollback;
@property (nonatomic) _Bool didRollback;

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
