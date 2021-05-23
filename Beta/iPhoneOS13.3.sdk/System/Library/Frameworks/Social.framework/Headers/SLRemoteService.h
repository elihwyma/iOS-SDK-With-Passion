/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLService.h>

#import <Social/Swift-Protocol.h>

@class NSBundle, NSSet, NSString, NSURL, UIImage;

@interface SLRemoteService : SLService <Swift>

{
    long long _maximumVideoCount;
    UIImage *_activityImage;
    NSBundle *_serviceBundle;
    _Bool _serviceRegionTargetIsChina;
    _Bool _addDeviceClassToRequest;
    NSString *_serviceTypeIdentifier;
    NSString *_accountTypeIdentifier;
    NSString *_localizedServiceName;
    NSString *_activityViewIconResourceName;
    long long _authenticationStyle;
    long long _maximumURLCount;
    long long _maximumImageCount;
    long long _maximumImageDataSize;
    long long _maximumVideoDataSize;
    long long _maximumVideoTimeLimit;
    NSSet *_supportedImageAssetURLSchemes;
    NSSet *_supportedVideoAssetURLSchemes;
    NSString *_activityImageName;
    NSURL *_serviceBundleURL;
}

@property (retain) NSString *serviceTypeIdentifier;
@property (retain) NSString *accountTypeIdentifier;
@property (retain) NSString *localizedServiceName;
@property (retain) NSString *activityViewIconResourceName;
@property _Bool serviceRegionTargetIsChina;
@property long long authenticationStyle;
@property long long maximumURLCount;
@property long long maximumImageCount;
@property long long maximumImageDataSize;
@property (nonatomic) long long maximumVideoCount;
@property long long maximumVideoDataSize;
@property long long maximumVideoTimeLimit;
@property (retain) NSSet *supportedImageAssetURLSchemes;
@property (retain) NSSet *supportedVideoAssetURLSchemes;
@property _Bool addDeviceClassToRequest;
@property (retain) NSString *activityImageName;
@property (retain) NSURL *serviceBundleURL;
@property (readonly) NSBundle *serviceBundle;

+ (_Bool)supportsSecureCoding;
+ (id)_cachedServices;
+ (id)remoteServiceForTypeIdentifier:(id)arg1;
+ (id)remoteServices;
+ (id)_cachedServiceWithType:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceType;
- (id)activityTitle;
- (id)activityImage;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (_Bool)isFirstClassService;
- (_Bool)supportsImageURL:(id)arg1;
- (_Bool)supportsVideoURL:(id)arg1;
- (id)composeViewController;
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;
- (_Bool)infoDictHasRequiredKeys:(id)arg1;
- (long long)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;
- (id)integerPropertyKeyMappings;
- (id)_requiredInfoDictKeys;
- (_Bool)_isValidAuthenicationStyleIdentifier:(id)arg1;
- (id)_authenticationStyleIdentifierMappings;
- (id)_encodableStringProperties;
- (_Bool)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;
- (id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2;

@end
