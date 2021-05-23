/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, VSAccountMetadataRequest, VSOptional;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequest : NSObject

{
    _Bool _allowsPrivacyUI;
    _Bool _requiresPrivacyUI;
    _Bool _canVetoAuthentication;
    _Bool _shouldInferFeaturedProviders;
    VSAccountMetadataRequest *_accountMetadataRequest;
    VSOptional *_requestingAppDisplayName;
    NSString *_requestingAppAdamID;
}

@property (retain, nonatomic) VSOptional *requestingAppDisplayName;
@property (retain, nonatomic) NSString *requestingAppAdamID;
@property (nonatomic, readonly, getter=isPreAuthRequest) _Bool preAuthRequest;
@property (nonatomic) _Bool allowsPrivacyUI;
@property (nonatomic) _Bool requiresPrivacyUI;
@property (nonatomic) _Bool canVetoAuthentication;
@property (copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest;
@property (nonatomic, readonly) _Bool allowsAuthenticationUI;
@property (copy, nonatomic, readonly) NSArray *supportedIdentityProviderIdentifiers;
@property (copy, nonatomic, readonly) NSArray *featuredIdentityProviderIdentifiers;
@property (nonatomic) _Bool shouldInferFeaturedProviders;
@property (copy, nonatomic, readonly) NSArray *supportedAccountProviderAuthenticationSchemes;
@property (copy, nonatomic, readonly) NSString *localizedVideoTitle;
@property (copy, nonatomic, readonly) NSString *accountProviderAuthenticationToken;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
