/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString, NSURL, PKFeatureApplicationDeclineDetails, PKFeatureApplicationOfferDetails;

@interface PKFeatureApplication : NSObject <Swift>

{
    _Bool _applicationStateDirty;
    NSString *_applicationIdentifier;
    NSURL *_applicationBaseURL;
    unsigned long long _feature;
    unsigned long long _applicationState;
    unsigned long long _applicationStateReason;
    PKFeatureApplicationOfferDetails *_applicationOfferDetails;
    PKFeatureApplicationDeclineDetails *_declineDetails;
    NSString *_applicationTermsIdentifier;
    NSDate *_lastUpdated;
    NSString *_businessChatIdentifier;
    NSString *_coreIDVServiceProviderName;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long applicationState;
@property (nonatomic) unsigned long long applicationStateReason;
@property (retain, nonatomic) PKFeatureApplicationOfferDetails *applicationOfferDetails;
@property (retain, nonatomic) PKFeatureApplicationDeclineDetails *declineDetails;
@property (copy, nonatomic) NSString *applicationTermsIdentifier;
@property (nonatomic) _Bool applicationStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSURL *applicationBaseURL;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *coreIDVServiceProviderName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)hasSufficientOTBForInstallmentConfiguration:(id)arg1;

@end
