/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDMailError;

@interface AWDMailAutoFetchReport : PBCodable

{
    unsigned long long _bucketedLocalNonDeletedCount;
    unsigned long long _duration;
    unsigned long long _fetchSize;
    unsigned long long _numMessagesFetched;
    unsigned long long _options;
    unsigned long long _timestamp;
    int _emailProvider;
    AWDMailError *_mailError;
    int _mailboxType;
    int _newMessagesState;
    int _protocol;
    int _totalBytesReceived;
    int _totalBytesSent;
    int _trigger;
    _Bool _didTimeout;
    _Bool _foreground;
    struct {
        unsigned int bucketedLocalNonDeletedCount:1;
        unsigned int duration:1;
        unsigned int fetchSize:1;
        unsigned int numMessagesFetched:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int emailProvider:1;
        unsigned int mailboxType:1;
        unsigned int newMessagesState:1;
        unsigned int protocol:1;
        unsigned int totalBytesReceived:1;
        unsigned int totalBytesSent:1;
        unsigned int trigger:1;
        unsigned int didTimeout:1;
        unsigned int foreground:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasProtocol;
@property (nonatomic) int protocol;
@property (nonatomic) _Bool hasEmailProvider;
@property (nonatomic) int emailProvider;
@property (nonatomic) _Bool hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic, readonly) _Bool hasMailError;
@property (retain, nonatomic) AWDMailError *mailError;
@property (nonatomic) _Bool hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) _Bool hasNewMessagesState;
@property (nonatomic) int newMessagesState;
@property (nonatomic) _Bool hasForeground;
@property (nonatomic) _Bool foreground;
@property (nonatomic) _Bool hasDidTimeout;
@property (nonatomic) _Bool didTimeout;
@property (nonatomic) _Bool hasOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic) _Bool hasFetchSize;
@property (nonatomic) unsigned long long fetchSize;
@property (nonatomic) _Bool hasNumMessagesFetched;
@property (nonatomic) unsigned long long numMessagesFetched;
@property (nonatomic) _Bool hasTotalBytesSent;
@property (nonatomic) int totalBytesSent;
@property (nonatomic) _Bool hasTotalBytesReceived;
@property (nonatomic) int totalBytesReceived;
@property (nonatomic) _Bool hasBucketedLocalNonDeletedCount;
@property (nonatomic) unsigned long long bucketedLocalNonDeletedCount;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned long long duration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)triggerAsString:(int)arg1;
- (int)StringAsTrigger:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
- (int)StringAsMailboxType:(id)arg1;
- (id)protocolAsString:(int)arg1;
- (int)StringAsProtocol:(id)arg1;
- (id)emailProviderAsString:(int)arg1;
- (int)StringAsEmailProvider:(id)arg1;
- (id)newMessagesStateAsString:(int)arg1;
- (int)StringAsNewMessagesState:(id)arg1;
- (id)totalBytesSentAsString:(int)arg1;
- (int)StringAsTotalBytesSent:(id)arg1;
- (id)totalBytesReceivedAsString:(int)arg1;
- (int)StringAsTotalBytesReceived:(id)arg1;

@end
