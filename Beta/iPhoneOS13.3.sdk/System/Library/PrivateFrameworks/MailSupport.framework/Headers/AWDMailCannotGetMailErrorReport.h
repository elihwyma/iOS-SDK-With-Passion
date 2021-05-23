/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDMailError, NSString;

@interface AWDMailCannotGetMailErrorReport : PBCodable

{
    unsigned long long _timestamp;
    NSString *_hostname;
    AWDMailError *_mailError;
    int _protocol;
    int _provider;
    NSString *_serverInfo;
    struct {
        unsigned int timestamp:1;
        unsigned int protocol:1;
        unsigned int provider:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasHostname;
@property (retain, nonatomic) NSString *hostname;
@property (nonatomic) _Bool hasProtocol;
@property (nonatomic) int protocol;
@property (nonatomic) _Bool hasProvider;
@property (nonatomic) int provider;
@property (nonatomic, readonly) _Bool hasMailError;
@property (retain, nonatomic) AWDMailError *mailError;
@property (nonatomic, readonly) _Bool hasServerInfo;
@property (retain, nonatomic) NSString *serverInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)providerAsString:(int)arg1;
- (int)StringAsProvider:(id)arg1;
- (id)protocolAsString:(int)arg1;
- (int)StringAsProtocol:(id)arg1;

@end
