/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSString;

@interface BRCExtensionErrorPayload : PBCodable <Swift>

{
    NSString *_minimumOSName;
    NSString *_recordId;
}

@property (nonatomic, readonly) _Bool hasMinimumOSName;
@property (retain, nonatomic) NSString *minimumOSName;
@property (nonatomic, readonly) _Bool hasRecordId;
@property (retain, nonatomic) NSString *recordId;

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
