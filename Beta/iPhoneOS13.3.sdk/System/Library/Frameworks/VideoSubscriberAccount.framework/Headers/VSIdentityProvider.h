/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, NSURL, VSOptional;

@interface VSIdentityProvider : NSObject

{
    NSString *_displayName;
    _Bool _prohibitedByStore;
    _Bool _developer;
    _Bool _isSetTopBoxSupported;
    _Bool _isSTBOptOutAllowed;
    VSOptional *_uniqueID;
    VSOptional *_providerID;
    VSOptional *_providerInfo;
    NSString *_nameForSorting;
    NSNumber *_rankForSorting;
    NSArray *_supportedTemplates;
    NSArray *_supportedAuthenticationSchemes;
    NSURL *_authenticationURL;
    NSURL *_appStoreRoomURL;
    NSArray *_appAdamIDs;
    NSString *_defaultAppId;
    NSString *_providerArtworkTemplateURL;
    NSString *_providerAppArtworkTemplateURL;
    NSNumber *_appPlacementPosition;
    NSString *_userToken;
}

@property (retain, nonatomic) VSOptional *uniqueID;
@property (retain, nonatomic) VSOptional *providerID;
@property (retain, nonatomic) VSOptional *providerInfo;
@property (copy, nonatomic) NSString *nameForSorting;
@property (copy, nonatomic) NSNumber *rankForSorting;
@property (nonatomic, readonly) VSOptional *displayName;
@property (copy, nonatomic) NSArray *supportedTemplates;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (nonatomic, getter=isProhibitedByStore) _Bool prohibitedByStore;
@property (nonatomic, readonly) _Bool supportsTemplatesSufficientForSomeKnownPlatform;
@property (nonatomic, readonly) _Bool supportsTemplatesSufficientForCurrentPlatform;
@property (nonatomic, getter=isDeveloper) _Bool developer;
@property (copy, nonatomic) NSURL *authenticationURL;
@property (copy, nonatomic) NSURL *appStoreRoomURL;
@property (copy, nonatomic) NSArray *appAdamIDs;
@property (copy, nonatomic) NSString *defaultAppId;
@property (copy, nonatomic) NSString *providerArtworkTemplateURL;
@property (nonatomic) _Bool isSetTopBoxSupported;
@property (nonatomic) _Bool isSTBOptOutAllowed;
@property (copy, nonatomic) NSString *providerAppArtworkTemplateURL;
@property (copy, nonatomic) NSNumber *appPlacementPosition;
@property (copy, nonatomic) NSString *userToken;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg1;
- (_Bool)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;

@end
