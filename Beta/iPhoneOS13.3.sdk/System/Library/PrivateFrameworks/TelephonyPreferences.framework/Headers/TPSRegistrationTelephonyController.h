/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSTelephonyController.h>

@class CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSArray, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController

{
    NSArray *_networks;
    CTNetworkSelectionInfo *_networkSelectionInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (copy, nonatomic) NSArray *networks;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)networkListAvailable:(id)arg1 list:(id)arg2;
- (void)networkSelected:(id)arg1 success:(_Bool)arg2 mode:(id)arg3;
- (void)fetchNetworkList;
- (void)selectNetwork:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)performDelegateSelector:(SEL)arg1;
- (id)copyNetworkSelectionInfo;
- (void)automaticallySelectNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (void)selectNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNetworkListWithCompletion:(CDUnknownBlockType)arg1;
- (void)networksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)automaticallySelectNetwork;

@end
