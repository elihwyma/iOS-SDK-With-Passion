/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@interface TransparencyAccount : NSObject

+ (id)sharedAccountStore;
+ (id)primaryAccount:(id *)arg1;
+ (unsigned long long)accountLevel:(id)arg1;
+ (long long)accountLevelErrorCodeForLevel:(id)arg1;
+ (id)createAuthToken:(id)arg1 authToken:(id)arg2;
+ (id)createAuthkitSession;
+ (id)authToken:(id *)arg1;
+ (_Bool)eligibleForSelfVerify;
+ (_Bool)eligibleForPeerVerify;
+ (_Bool)eligibleForEnrollmentVerify;
+ (_Bool)initiateCredentialRenewal:(id *)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
