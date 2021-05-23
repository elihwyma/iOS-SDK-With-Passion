/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDPETQuotaReachedEvent, EDPETSubmittedEvent, NSData;

@interface EDPETBatchedWrapper : PBCodable <Swift>

{
    EDPETQuotaReachedEvent *_quotaEvent;
    NSData *_rawData;
    EDPETSubmittedEvent *_submittedEvent;
}

@property (nonatomic, readonly) _Bool hasQuotaEvent;
@property (retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent;
@property (nonatomic, readonly) _Bool hasSubmittedEvent;
@property (retain, nonatomic) EDPETSubmittedEvent *submittedEvent;
@property (nonatomic, readonly) _Bool hasRawData;
@property (retain, nonatomic) NSData *rawData;

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
