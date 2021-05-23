/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, NTPBEventObject;

@interface NTPBEvent : PBCodable

{
    long long _appConfigTreatmentId;
    long long _duration;
    long long _personalizationTreatmentId;
    long long _personalizedTreatmentId;
    long long _startTimestamp;
    NSString *_appAnalyticsEventIdentifier;
    NSString *_appAnalyticsEventPath;
    NSString *_bundleOfferId;
    NSString *_bundlePurchaseId;
    int _bundleSubscriptionStatus;
    int _cellularRadioAccessTechnology;
    int _deviceOrientation;
    NTPBEventObject *_eventObject;
    int _gestureType;
    int _interfaceOrientation;
    NSString *_notwUserId;
    int _reachabilityStatus;
    NSString *_referringSource;
    NSString *_referringType;
    NSData *_sessionId;
    NSData *_sessionIdWatch;
    NSString *_userId;
    NSMutableArray *_userPaidSubscriptionStatus;
    NSString *_userStorefrontId;
    NSData *_widgetSessionId;
    NSString *_widgetUserId;
    NSString *_windowFrameInScreen;
    _Bool _isAmplifyUser;
    _Bool _isBundlePurchaser;
    _Bool _isPaidSubscriberDuringEvent;
    _Bool _isPaidSubscriberFromAppStoreDuringEvent;
    _Bool _isPaidSubscriberFromNewsDuringEvent;
    _Bool _isPaidSubscriberFromThirdPartyDuringEvent;
    struct {
        unsigned int appConfigTreatmentId:1;
        unsigned int duration:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int personalizedTreatmentId:1;
        unsigned int startTimestamp:1;
        unsigned int bundleSubscriptionStatus:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int deviceOrientation:1;
        unsigned int gestureType:1;
        unsigned int interfaceOrientation:1;
        unsigned int reachabilityStatus:1;
        unsigned int isAmplifyUser:1;
        unsigned int isBundlePurchaser:1;
        unsigned int isPaidSubscriberDuringEvent:1;
        unsigned int isPaidSubscriberFromAppStoreDuringEvent:1;
        unsigned int isPaidSubscriberFromNewsDuringEvent:1;
        unsigned int isPaidSubscriberFromThirdPartyDuringEvent:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasEventObject;
@property (retain, nonatomic) NTPBEventObject *eventObject;
@property (nonatomic, readonly) _Bool hasSessionId;
@property (retain, nonatomic) NSData *sessionId;
@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic, readonly) _Bool hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic) _Bool hasStartTimestamp;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) long long duration;
@property (nonatomic) _Bool hasDeviceOrientation;
@property (nonatomic) int deviceOrientation;
@property (nonatomic, readonly) _Bool hasReferringType;
@property (retain, nonatomic) NSString *referringType;
@property (nonatomic, readonly) _Bool hasReferringSource;
@property (retain, nonatomic) NSString *referringSource;
@property (nonatomic, readonly) _Bool hasWindowFrameInScreen;
@property (retain, nonatomic) NSString *windowFrameInScreen;
@property (nonatomic) _Bool hasGestureType;
@property (nonatomic) int gestureType;
@property (nonatomic) _Bool hasInterfaceOrientation;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic) _Bool hasReachabilityStatus;
@property (nonatomic) int reachabilityStatus;
@property (nonatomic) _Bool hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic) _Bool hasPersonalizationTreatmentId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) _Bool hasPersonalizedTreatmentId;
@property (nonatomic) long long personalizedTreatmentId;
@property (nonatomic) _Bool hasIsPaidSubscriberDuringEvent;
@property (nonatomic) _Bool isPaidSubscriberDuringEvent;
@property (nonatomic) _Bool hasIsPaidSubscriberFromNewsDuringEvent;
@property (nonatomic) _Bool isPaidSubscriberFromNewsDuringEvent;
@property (nonatomic) _Bool hasIsPaidSubscriberFromAppStoreDuringEvent;
@property (nonatomic) _Bool isPaidSubscriberFromAppStoreDuringEvent;
@property (nonatomic) _Bool hasIsPaidSubscriberFromThirdPartyDuringEvent;
@property (nonatomic) _Bool isPaidSubscriberFromThirdPartyDuringEvent;
@property (nonatomic, readonly) _Bool hasNotwUserId;
@property (retain, nonatomic) NSString *notwUserId;
@property (nonatomic, readonly) _Bool hasSessionIdWatch;
@property (retain, nonatomic) NSData *sessionIdWatch;
@property (nonatomic) _Bool hasAppConfigTreatmentId;
@property (nonatomic) long long appConfigTreatmentId;
@property (nonatomic, readonly) _Bool hasWidgetSessionId;
@property (retain, nonatomic) NSData *widgetSessionId;
@property (retain, nonatomic) NSMutableArray *userPaidSubscriptionStatus;
@property (nonatomic, readonly) _Bool hasWidgetUserId;
@property (retain, nonatomic) NSString *widgetUserId;
@property (nonatomic) _Bool hasBundleSubscriptionStatus;
@property (nonatomic) int bundleSubscriptionStatus;
@property (nonatomic, readonly) _Bool hasBundlePurchaseId;
@property (retain, nonatomic) NSString *bundlePurchaseId;
@property (nonatomic, readonly) _Bool hasBundleOfferId;
@property (retain, nonatomic) NSString *bundleOfferId;
@property (nonatomic) _Bool hasIsBundlePurchaser;
@property (nonatomic) _Bool isBundlePurchaser;
@property (nonatomic, readonly) _Bool hasAppAnalyticsEventIdentifier;
@property (retain, nonatomic) NSString *appAnalyticsEventIdentifier;
@property (nonatomic, readonly) _Bool hasAppAnalyticsEventPath;
@property (retain, nonatomic) NSString *appAnalyticsEventPath;
@property (nonatomic) _Bool hasIsAmplifyUser;
@property (nonatomic) _Bool isAmplifyUser;

+ (Class)userPaidSubscriptionStatusType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
- (int)StringAsReachabilityStatus:(id)arg1;
- (id)bundleSubscriptionStatusAsString:(int)arg1;
- (int)StringAsBundleSubscriptionStatus:(id)arg1;
- (void)addUserPaidSubscriptionStatus:(id)arg1;
- (void)clearUserPaidSubscriptionStatus;
- (unsigned long long)userPaidSubscriptionStatusCount;
- (id)userPaidSubscriptionStatusAtIndex:(unsigned long long)arg1;

@end
