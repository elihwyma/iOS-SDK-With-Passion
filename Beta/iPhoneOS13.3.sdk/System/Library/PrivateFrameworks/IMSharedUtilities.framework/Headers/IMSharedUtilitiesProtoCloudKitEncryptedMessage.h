/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <Swift>

{
    long long _associatedMessageType;
    unsigned long long _expireState;
    unsigned long long _timeDelivered;
    unsigned long long _timeExpressiveSentPlayed;
    unsigned long long _timePlayed;
    unsigned long long _timeRead;
    NSString *_associatedMessageGuid;
    unsigned int _associatedMessageRangeLength;
    unsigned int _associatedMessageRangeLocation;
    NSString *_baloonBundleId;
    NSString *_expressiveSendId;
    NSString *_messageBody;
    NSData *_messageBodyData;
    NSString *_messageSubject;
    NSData *_messageSummaryInfo;
    NSData *_padding;
    NSData *_payloadData;
    unsigned int _version;
    struct {
        unsigned int associatedMessageType:1;
        unsigned int expireState:1;
        unsigned int timeDelivered:1;
        unsigned int timeExpressiveSentPlayed:1;
        unsigned int timePlayed:1;
        unsigned int timeRead:1;
        unsigned int associatedMessageRangeLength:1;
        unsigned int associatedMessageRangeLocation:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) _Bool hasMessageSubject;
@property (retain, nonatomic) NSString *messageSubject;
@property (nonatomic, readonly) _Bool hasMessageBody;
@property (retain, nonatomic) NSString *messageBody;
@property (nonatomic, readonly) _Bool hasMessageBodyData;
@property (retain, nonatomic) NSData *messageBodyData;
@property (nonatomic, readonly) _Bool hasBaloonBundleId;
@property (retain, nonatomic) NSString *baloonBundleId;
@property (nonatomic, readonly) _Bool hasPayloadData;
@property (retain, nonatomic) NSData *payloadData;
@property (nonatomic, readonly) _Bool hasMessageSummaryInfo;
@property (retain, nonatomic) NSData *messageSummaryInfo;
@property (nonatomic, readonly) _Bool hasExpressiveSendId;
@property (retain, nonatomic) NSString *expressiveSendId;
@property (nonatomic) _Bool hasTimeRead;
@property (nonatomic) unsigned long long timeRead;
@property (nonatomic) _Bool hasTimePlayed;
@property (nonatomic) unsigned long long timePlayed;
@property (nonatomic) _Bool hasTimeExpressiveSentPlayed;
@property (nonatomic) unsigned long long timeExpressiveSentPlayed;
@property (nonatomic, readonly) _Bool hasPadding;
@property (retain, nonatomic) NSData *padding;
@property (nonatomic) _Bool hasTimeDelivered;
@property (nonatomic) unsigned long long timeDelivered;
@property (nonatomic) _Bool hasExpireState;
@property (nonatomic) unsigned long long expireState;
@property (nonatomic) _Bool hasAssociatedMessageType;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic, readonly) _Bool hasAssociatedMessageGuid;
@property (retain, nonatomic) NSString *associatedMessageGuid;
@property (nonatomic) _Bool hasAssociatedMessageRangeLocation;
@property (nonatomic) unsigned int associatedMessageRangeLocation;
@property (nonatomic) _Bool hasAssociatedMessageRangeLength;
@property (nonatomic) unsigned int associatedMessageRangeLength;

- (void)dealloc;
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
