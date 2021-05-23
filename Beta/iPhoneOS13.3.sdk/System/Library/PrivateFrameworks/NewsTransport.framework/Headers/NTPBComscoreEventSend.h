/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBComscoreEventSend : PBCodable

{
    int _comscoreEventType;
    NSString *_contentViewedId;
    NSString *_eventUdid;
    NSString *_failureReasonCode;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int comscoreEventType:1;
        unsigned int resultType:1;
    } _has;
}

@property (nonatomic) _Bool hasComscoreEventType;
@property (nonatomic) int comscoreEventType;
@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic, readonly) _Bool hasEventUdid;
@property (retain, nonatomic) NSString *eventUdid;
@property (nonatomic, readonly) _Bool hasFailureReasonCode;
@property (retain, nonatomic) NSString *failureReasonCode;
@property (nonatomic, readonly) _Bool hasContentViewedId;
@property (retain, nonatomic) NSString *contentViewedId;
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
