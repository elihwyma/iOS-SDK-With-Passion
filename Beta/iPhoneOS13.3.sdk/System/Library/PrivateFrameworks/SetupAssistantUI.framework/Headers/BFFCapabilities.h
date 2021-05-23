/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface BFFCapabilities : NSObject

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _Bool _regionSupportsPaymentRegistrationInitialized;
    _Bool _regionSupportsPaymentRegistration;
}

+ (id)sharedCapabilities;

- (id)init;
- (void)dealloc;
- (_Bool)supportsApplePay;
- (_Bool)isAppleTV;
- (void)localeChanged:(id)arg1;
- (void)getRegionSupportsPaymentRegistrationWithCompletion:(CDUnknownBlockType)arg1;

@end
