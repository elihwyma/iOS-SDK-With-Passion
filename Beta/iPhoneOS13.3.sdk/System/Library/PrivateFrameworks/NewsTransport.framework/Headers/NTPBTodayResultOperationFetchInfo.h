/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBTodayWidgetConfig;

@interface NTPBTodayResultOperationFetchInfo : PBCodable

{
    CDStruct_95bda58d _userSegmentationSegmentSetIds;
    CDStruct_5df41632 _userSegmentationTreatmentIds;
    long long _appConfigTreatmentIDInteger;
    long long _cellularRadioAccessTechnology;
    long long _onboardingVersion;
    long long _reachabilityStatus;
    NSString *_bundleIap;
    NSData *_clickThroughRateByPersonalizationFeatureIDData;
    NSString *_contentStoreFrontID;
    NSString *_localeIdentifier;
    NSString *_todaySourceIdentifier;
    NSString *_userID;
    NTPBTodayWidgetConfig *_widgetConfig;
    _Bool _isBundleSubscriber;
    _Bool _wifiReachable;
    struct {
        unsigned int appConfigTreatmentIDInteger:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int onboardingVersion:1;
        unsigned int reachabilityStatus:1;
        unsigned int isBundleSubscriber:1;
        unsigned int wifiReachable:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTodaySourceIdentifier;
@property (retain, nonatomic) NSString *todaySourceIdentifier;
@property (nonatomic) _Bool hasAppConfigTreatmentIDInteger;
@property (nonatomic) long long appConfigTreatmentIDInteger;
@property (nonatomic, readonly) _Bool hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic, readonly) _Bool hasContentStoreFrontID;
@property (retain, nonatomic) NSString *contentStoreFrontID;
@property (nonatomic) _Bool hasWifiReachable;
@property (nonatomic) _Bool wifiReachable;
@property (nonatomic) _Bool hasCellularRadioAccessTechnology;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic) _Bool hasReachabilityStatus;
@property (nonatomic) long long reachabilityStatus;
@property (nonatomic, readonly) _Bool hasWidgetConfig;
@property (retain, nonatomic) NTPBTodayWidgetConfig *widgetConfig;
@property (nonatomic) _Bool hasOnboardingVersion;
@property (nonatomic) long long onboardingVersion;
@property (nonatomic, readonly) _Bool hasClickThroughRateByPersonalizationFeatureIDData;
@property (retain, nonatomic) NSData *clickThroughRateByPersonalizationFeatureIDData;
@property (nonatomic, readonly) _Bool hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (nonatomic, readonly) unsigned long long userSegmentationSegmentSetIdsCount;
@property (nonatomic, readonly) int *userSegmentationSegmentSetIds;
@property (nonatomic, readonly) unsigned long long userSegmentationTreatmentIdsCount;
@property (nonatomic, readonly) long long *userSegmentationTreatmentIds;
@property (nonatomic) _Bool hasIsBundleSubscriber;
@property (nonatomic) _Bool isBundleSubscriber;
@property (nonatomic, readonly) _Bool hasBundleIap;
@property (retain, nonatomic) NSString *bundleIap;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1;
- (void)addUserSegmentationTreatmentIds:(long long)arg1;
- (int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1;
- (void)addUserSegmentationSegmentSetIds:(int)arg1;
- (void)clearUserSegmentationTreatmentIds;
- (void)setUserSegmentationTreatmentIds:(long long *)arg1 count:(unsigned long long)arg2;
- (void)clearUserSegmentationSegmentSetIds;
- (void)setUserSegmentationSegmentSetIds:(int *)arg1 count:(unsigned long long)arg2;

@end
