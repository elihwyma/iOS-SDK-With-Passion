/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface VSAppDescription : NSObject

{
    _Bool _offersInAppPurchases;
    NSString *_displayName;
    NSNumber *_adamID;
    NSString *_buyParams;
    NSString *_bundleID;
    NSString *_sellerName;
    NSString *_externalVersionID;
    NSURL *_appStoreURL;
    NSURL *_privacyPolicyEndpointURL;
    NSURL *_licenseAgreementEndpointURL;
    NSString *_rating;
    NSNumber *_contentRank;
    NSString *_artworkURLTemplate;
    UIImage *_icon;
}

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *shortenedDisplayName;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sellerName;
@property (copy, nonatomic) NSString *externalVersionID;
@property (copy, nonatomic) NSURL *appStoreURL;
@property (copy, nonatomic) NSURL *privacyPolicyEndpointURL;
@property (copy, nonatomic) NSURL *licenseAgreementEndpointURL;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSNumber *contentRank;
@property (nonatomic) _Bool offersInAppPurchases;
@property (copy, nonatomic) NSString *artworkURLTemplate;
@property (retain, nonatomic) UIImage *icon;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)iconURLForSize:(struct CGSize)arg1;

@end
