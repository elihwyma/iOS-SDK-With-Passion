/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBRequest.h>

@class NSString, SYMessageHeader;

@interface SYResetRequest : PBRequest

{
    NSString *_cancelSessionID;
    SYMessageHeader *_header;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (nonatomic, readonly) _Bool hasCancelSessionID;
@property (retain, nonatomic) NSString *cancelSessionID;

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
