/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMPublicUserInfo, EDAMUser, EDAMUserUrls, NSNumber, NSString;

@interface EDAMAuthenticationResult : FATObject

{
    NSNumber *_currentTime;
    NSString *_authenticationToken;
    NSNumber *_expiration;
    EDAMUser *_user;
    EDAMPublicUserInfo *_publicUserInfo;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSNumber *_secondFactorRequired;
    NSString *_secondFactorDeliveryHint;
    EDAMUserUrls *_urls;
}

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSString *authenticationToken;
@property (retain, nonatomic) NSNumber *expiration;
@property (retain, nonatomic) EDAMUser *user;
@property (retain, nonatomic) EDAMPublicUserInfo *publicUserInfo;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;
@property (retain, nonatomic) NSNumber *secondFactorRequired;
@property (retain, nonatomic) NSString *secondFactorDeliveryHint;
@property (retain, nonatomic) EDAMUserUrls *urls;

+ (id)structName;
+ (id)structFields;

@end
