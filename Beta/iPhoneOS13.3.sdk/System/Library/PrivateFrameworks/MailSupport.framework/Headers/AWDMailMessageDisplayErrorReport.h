/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDMailMessage;

@interface AWDMailMessageDisplayErrorReport : PBCodable

{
    unsigned long long _timestamp;
    int _loadingError;
    AWDMailMessage *_message;
    int _mimeError;
    struct {
        unsigned int timestamp:1;
        unsigned int loadingError:1;
        unsigned int mimeError:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasMimeError;
@property (nonatomic) int mimeError;
@property (nonatomic) _Bool hasLoadingError;
@property (nonatomic) int loadingError;
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
- (id)mimeErrorAsString:(int)arg1;
- (int)StringAsMimeError:(id)arg1;
- (id)loadingErrorAsString:(int)arg1;
- (int)StringAsLoadingError:(id)arg1;

@end
