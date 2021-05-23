/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBShareSheetIapFail : PBCodable

{
    NSString *_articleId;
    NSString *_failedIapId;
    int _failureReason;
    NSString *_sourceChannelId;
    struct {
        unsigned int failureReason:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFailedIapId;
@property (retain, nonatomic) NSString *failedIapId;
@property (nonatomic) _Bool hasFailureReason;
@property (nonatomic) int failureReason;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
