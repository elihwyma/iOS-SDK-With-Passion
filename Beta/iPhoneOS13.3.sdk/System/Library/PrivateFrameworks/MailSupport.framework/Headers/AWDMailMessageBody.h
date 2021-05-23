/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDMailMessageBody : PBCodable

{
    unsigned long long _totalTextSize;
    NSString *_mimeSubtype;
    NSString *_mimeType;
    struct {
        unsigned int totalTextSize:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (nonatomic, readonly) _Bool hasMimeSubtype;
@property (retain, nonatomic) NSString *mimeSubtype;
@property (nonatomic) _Bool hasTotalTextSize;
@property (nonatomic) unsigned long long totalTextSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithMIMEBody:(id)arg1;

@end
