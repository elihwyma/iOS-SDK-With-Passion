/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAnisette : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (_Bool)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5;
+ (id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3;
+ (void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2;
+ (_Bool)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (_Bool)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (_Bool)_eraseProvisioningForType:(long long)arg1 account:(id)arg2;
+ (_Bool)_shouldRetryAfterError:(id)arg1;
+ (_Bool)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;
+ (id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;

@end
