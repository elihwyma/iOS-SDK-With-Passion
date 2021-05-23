/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMTelephonyClient.h>

@class NSString;

@interface VMCarrierBundleClient : VMTelephonyClient

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)carrierBundleChange:(id)arg1;
- (id)objectForKey:(id)arg1 subscription:(id)arg2;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3;
- (_Bool)isPasswordChangeSupportedForSubscription:(id)arg1;
- (id)objectForKey:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3 error:(id *)arg4;
- (_Bool)isGreetingChangeSupportedForSubscription:(id)arg1;
- (double)maximumGreetingDurationForSubscription:(id)arg1;
- (_Bool)isPasswordChangeSupportedForDefaultSubscription;
- (id)serviceNameForSubscription:(id)arg1;
- (_Bool)isServiceSupportedForSubscription:(id)arg1;

@end
