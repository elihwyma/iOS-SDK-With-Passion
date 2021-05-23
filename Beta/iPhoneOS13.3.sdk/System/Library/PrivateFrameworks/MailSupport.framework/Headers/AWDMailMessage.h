/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDMailMessageBody, NSString;

@interface AWDMailMessage : PBCodable

{
    AWDMailMessageBody *_body;
    NSString *_messageId;
}

@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic, readonly) _Bool hasBody;
@property (retain, nonatomic) AWDMailMessageBody *body;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithMailMessage:(id)arg1;

@end
