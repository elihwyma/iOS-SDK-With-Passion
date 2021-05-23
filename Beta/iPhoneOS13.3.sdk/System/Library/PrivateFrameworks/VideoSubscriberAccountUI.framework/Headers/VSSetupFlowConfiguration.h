/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, VSAppDescription, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSSetupFlowConfiguration : NSObject

{
    _Bool _shouldSkipSetupEntirely;
    _Bool _shouldOfferAuthenticationFlow;
    _Bool _shouldOfferSoleAuthenticationFlow;
    _Bool _shouldOfferSTBAuthenticationFlow;
    _Bool _canShowSupportedAppsButton;
    VSIdentityProvider *_identityProvider;
    NSString *_providerAccountUsername;
    NSString *_preferredAppID;
    VSAppDescription *_msoAppDescription;
    NSArray *_bundlesIDsToConsent;
    NSDictionary *_vouchersByBundleID;
}

@property (nonatomic) _Bool shouldSkipSetupEntirely;
@property (nonatomic) _Bool shouldOfferAuthenticationFlow;
@property (nonatomic) _Bool shouldOfferSoleAuthenticationFlow;
@property (nonatomic) _Bool shouldOfferSTBAuthenticationFlow;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSString *providerAccountUsername;
@property (copy, nonatomic) NSString *preferredAppID;
@property (retain, nonatomic) VSAppDescription *msoAppDescription;
@property (copy, nonatomic) NSArray *bundlesIDsToConsent;
@property (copy, nonatomic) NSDictionary *vouchersByBundleID;
@property (nonatomic) _Bool canShowSupportedAppsButton;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
