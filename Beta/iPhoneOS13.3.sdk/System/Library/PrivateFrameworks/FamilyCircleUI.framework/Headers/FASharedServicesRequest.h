/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, FARequestConfigurator;

@interface FASharedServicesRequest : AARequest

{
    FARequestConfigurator *_requestConfigurator;
    ACAccount *_appleAccount;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithAppleAccount:(id)arg1 urlString:(id)arg2;

@end
