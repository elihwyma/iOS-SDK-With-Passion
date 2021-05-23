/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class SYErrorInfo, SYMessageHeader;

@interface SYResetResponse : PBCodable

{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    _Bool _accepted;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (nonatomic) _Bool accepted;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) SYErrorInfo *error;

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
