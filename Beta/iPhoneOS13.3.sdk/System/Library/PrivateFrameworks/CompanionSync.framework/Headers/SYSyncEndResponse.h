/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYSyncEndResponse : PBCodable

{
    SYErrorInfo *_error;
    int _errorResolution;
    SYMessageHeader *_header;
    NSString *_syncID;
    struct {
        unsigned int errorResolution:1;
    } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) SYErrorInfo *error;
@property (nonatomic) _Bool hasErrorResolution;
@property (nonatomic) int errorResolution;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)errorResolutionAsString:(int)arg1;
- (int)StringAsErrorResolution:(id)arg1;

@end
