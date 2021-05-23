/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBPaywallDescription : PBCodable

{
    NSString *_channelPaywall;
    NSString *_hardPaywall;
    NSString *_leakyPaywall;
    NSString *_promotionalPaywall;
}

@property (nonatomic, readonly) _Bool hasChannelPaywall;
@property (retain, nonatomic) NSString *channelPaywall;
@property (nonatomic, readonly) _Bool hasLeakyPaywall;
@property (retain, nonatomic) NSString *leakyPaywall;
@property (nonatomic, readonly) _Bool hasPromotionalPaywall;
@property (retain, nonatomic) NSString *promotionalPaywall;
@property (nonatomic, readonly) _Bool hasHardPaywall;
@property (retain, nonatomic) NSString *hardPaywall;

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
