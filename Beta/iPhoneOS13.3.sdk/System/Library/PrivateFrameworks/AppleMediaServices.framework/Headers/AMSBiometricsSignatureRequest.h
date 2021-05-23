/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, LAContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureRequest : NSObject

{
    struct __SecAccessControl *_localAuthAccessControlRef;
    ACAccount *_account;
    NSString *_challenge;
    AMSProcessInfo *_clientInfo;
    AMSKeychainOptions *_keychainOptions;
    LAContext *_localAuthContext;
    NSDictionary *_localAuthOptions;
}

@property (copy, nonatomic, readonly) ACAccount *account;
@property (copy, nonatomic, readonly) NSString *challenge;
@property (copy, nonatomic, readonly) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) AMSKeychainOptions *keychainOptions;
@property (nonatomic, readonly) struct __SecAccessControl *localAuthAccessControlRef;
@property (nonatomic, readonly) LAContext *localAuthContext;
@property (nonatomic, readonly) NSDictionary *localAuthOptions;

- (void)dealloc;
- (id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_localAuthOptions;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl *)arg1;

@end
