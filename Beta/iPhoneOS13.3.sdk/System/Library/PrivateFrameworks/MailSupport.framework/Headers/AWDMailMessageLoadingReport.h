/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDMailMessage;

@interface AWDMailMessageLoadingReport : PBCodable

{
    long long _timeLoadingSpinnerIsVisibleInSeconds;
    unsigned long long _timestamp;
    AWDMailMessage *_message;
    struct {
        unsigned int timeLoadingSpinnerIsVisibleInSeconds:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTimeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic, readonly) _Bool hasMessage;
@property (retain, nonatomic) AWDMailMessage *message;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2;

@end
