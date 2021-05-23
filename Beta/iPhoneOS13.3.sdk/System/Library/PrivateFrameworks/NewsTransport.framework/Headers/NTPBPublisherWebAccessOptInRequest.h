/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest

{
    NSString *_channelId;
    NSString *_country;
    NSString *_email;
    NSString *_iapId;
    NSString *_language;
    NSString *_purchaseReceipt;
}

@property (nonatomic, readonly) _Bool hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic, readonly) _Bool hasEmail;
@property (retain, nonatomic) NSString *email;
@property (nonatomic, readonly) _Bool hasPurchaseReceipt;
@property (retain, nonatomic) NSString *purchaseReceipt;
@property (nonatomic, readonly) _Bool hasIapId;
@property (retain, nonatomic) NSString *iapId;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasCountry;
@property (retain, nonatomic) NSString *country;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
