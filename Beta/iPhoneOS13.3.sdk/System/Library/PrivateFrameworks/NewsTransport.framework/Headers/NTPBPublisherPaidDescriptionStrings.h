/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable

{
    NTPBPaywallDescription *_paywallDescription;
}

@property (nonatomic, readonly) _Bool hasPaywallDescription;
@property (retain, nonatomic) NTPBPaywallDescription *paywallDescription;

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
