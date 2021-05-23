/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface AWDMailSearchSessionReport : PBCodable

{
    unsigned long long _messagesLeftToIndex;
    unsigned long long _percentOfMessagesIndexed;
    unsigned long long _timestamp;
    int _emailProvider;
    NSMutableArray *_engagements;
    struct {
        unsigned int messagesLeftToIndex:1;
        unsigned int percentOfMessagesIndexed:1;
        unsigned int timestamp:1;
        unsigned int emailProvider:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *engagements;
@property (nonatomic) _Bool hasMessagesLeftToIndex;
@property (nonatomic) unsigned long long messagesLeftToIndex;
@property (nonatomic) _Bool hasPercentOfMessagesIndexed;
@property (nonatomic) unsigned long long percentOfMessagesIndexed;
@property (nonatomic) _Bool hasEmailProvider;
@property (nonatomic) int emailProvider;

+ (Class)engagementsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)emailProviderAsString:(int)arg1;
- (int)StringAsEmailProvider:(id)arg1;
- (void)addEngagements:(id)arg1;
- (unsigned long long)engagementsCount;
- (void)clearEngagements;
- (id)engagementsAtIndex:(unsigned long long)arg1;

@end
