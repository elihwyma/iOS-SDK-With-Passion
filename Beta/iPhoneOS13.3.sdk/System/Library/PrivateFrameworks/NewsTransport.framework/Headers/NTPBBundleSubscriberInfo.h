/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBBundleSubscriberInfo : PBCodable

{
    long long _startTimestamp;
    int _bundleSubscriptionStatus;
    NSMutableArray *_subscribedChannelIds;
    NSString *_userId;
    NSString *_userStorefrontId;
    _Bool _isAmplifyUser;
    _Bool _isBundlePurchaser;
    _Bool _isStoreDemoModeEnabled;
    struct {
        unsigned int startTimestamp:1;
        unsigned int bundleSubscriptionStatus:1;
        unsigned int isAmplifyUser:1;
        unsigned int isBundlePurchaser:1;
        unsigned int isStoreDemoModeEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasBundleSubscriptionStatus;
@property (nonatomic) int bundleSubscriptionStatus;
@property (retain, nonatomic) NSMutableArray *subscribedChannelIds;
@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic, readonly) _Bool hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic) _Bool hasStartTimestamp;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) _Bool hasIsStoreDemoModeEnabled;
@property (nonatomic) _Bool isStoreDemoModeEnabled;
@property (nonatomic) _Bool hasIsBundlePurchaser;
@property (nonatomic) _Bool isBundlePurchaser;
@property (nonatomic) _Bool hasIsAmplifyUser;
@property (nonatomic) _Bool isAmplifyUser;

+ (Class)subscribedChannelIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addSubscribedChannelIds:(id)arg1;
- (id)bundleSubscriptionStatusAsString:(int)arg1;
- (int)StringAsBundleSubscriptionStatus:(id)arg1;
- (void)clearSubscribedChannelIds;
- (unsigned long long)subscribedChannelIdsCount;
- (id)subscribedChannelIdsAtIndex:(unsigned long long)arg1;

@end
