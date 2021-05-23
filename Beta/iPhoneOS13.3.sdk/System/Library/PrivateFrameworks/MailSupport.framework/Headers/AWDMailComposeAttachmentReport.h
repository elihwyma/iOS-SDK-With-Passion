/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDMailComposeAttachmentReport : PBCodable

{
    long long _drawingInsertCount;
    long long _drawingSentCount;
    unsigned long long _timestamp;
    _Bool _messageSent;
    struct {
        unsigned int drawingInsertCount:1;
        unsigned int drawingSentCount:1;
        unsigned int timestamp:1;
        unsigned int messageSent:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDrawingInsertCount;
@property (nonatomic) long long drawingInsertCount;
@property (nonatomic) _Bool hasDrawingSentCount;
@property (nonatomic) long long drawingSentCount;
@property (nonatomic) _Bool hasMessageSent;
@property (nonatomic) _Bool messageSent;

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
