/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSError, NSString, NSURL;

@interface ICMusicSubscriptionCarrierBundlingEligibilityResponse : NSObject

{
    _Bool _familySubscription;
    _Bool _wantsDelayedRetry;
    _Bool _needsHeaderEnrichment;
    _Bool _needsSilentSMS;
    long long _carrierBundlingStatusType;
    NSError *_error;
    NSString *_SMSSessionIdentifier;
    double _delayInterval;
    NSString *_headerEnrichmentMessage;
    NSString *_headerEnrichmentSessionIdentifier;
    NSURL *_headerEnrichmentURL;
    NSString *_silentSMSMessage;
    NSString *_silentSMSNumber;
    NSString *_cellularProviderName;
    NSString *_phoneNumber;
}

@property (nonatomic, readonly) long long carrierBundlingStatusType;
@property (nonatomic, readonly, getter=isFamilySubscription) _Bool familySubscription;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *SMSSessionIdentifier;
@property (nonatomic, readonly) double delayInterval;
@property (nonatomic, readonly) _Bool wantsDelayedRetry;
@property (nonatomic, readonly) NSString *headerEnrichmentMessage;
@property (nonatomic, readonly) NSString *headerEnrichmentSessionIdentifier;
@property (nonatomic, readonly) NSURL *headerEnrichmentURL;
@property (nonatomic, readonly) _Bool needsHeaderEnrichment;
@property (nonatomic, readonly) _Bool needsSilentSMS;
@property (nonatomic, readonly) NSString *silentSMSMessage;
@property (nonatomic, readonly) NSString *silentSMSNumber;
@property (nonatomic, readonly) NSString *cellularProviderName;
@property (nonatomic, readonly) NSString *phoneNumber;

- (id)initWithEligibilityDictionary:(id)arg1 cellularProviderName:(id)arg2 phoneNumber:(id)arg3;

@end
