/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSApplication.h>

@class SKUIApplicationController;

__attribute__((visibility("hidden")))
@interface SKUIJSApplication : IKJSApplication

{
    SKUIApplicationController *_applicationController;
}

@property (weak, nonatomic, readonly) SKUIApplicationController *applicationController;
@property (nonatomic, readonly) _Bool pageRenderMetricsEnabled;
@property (readonly) _Bool isRunningTests;

- (void)launchFailed;
- (void)launchComplete:(id)arg1;
- (void)sendDocumentMessage:(id)arg1:(id)arg2:(id)arg3;
- (id)initWithAppContext:(id)arg1 applicationController:(id)arg2;

@end
