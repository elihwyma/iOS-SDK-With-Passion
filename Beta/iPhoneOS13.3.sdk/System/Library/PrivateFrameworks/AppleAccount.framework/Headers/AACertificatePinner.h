/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

#import <AppleAccount/Swift-Protocol.h>

@class NSString;

@interface AACertificatePinner : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPinner;
+ (_Bool)isSetupServiceHost:(id)arg1;
+ (_Bool)isValidCertificateTrust:(struct __SecTrust *)arg1;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;

@end
