/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable

{
    NSString *_purchaseId;
    _Bool _allowsPublisherPadApp;
    _Bool _allowsPublisherPhoneApp;
    _Bool _allowsPublisherWebSite;
    _Bool _preferredOffer;
    struct {
        unsigned int allowsPublisherPadApp:1;
        unsigned int allowsPublisherPhoneApp:1;
        unsigned int allowsPublisherWebSite:1;
        unsigned int preferredOffer:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) _Bool hasAllowsPublisherPhoneApp;
@property (nonatomic) _Bool allowsPublisherPhoneApp;
@property (nonatomic) _Bool hasAllowsPublisherPadApp;
@property (nonatomic) _Bool allowsPublisherPadApp;
@property (nonatomic) _Bool hasAllowsPublisherWebSite;
@property (nonatomic) _Bool allowsPublisherWebSite;
@property (nonatomic) _Bool hasPreferredOffer;
@property (nonatomic) _Bool preferredOffer;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
