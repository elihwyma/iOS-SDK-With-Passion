/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSArray, NSString, TPSCellularNetworkItem, TPSRegistrationTelephonyController;

@interface TPSCellularNetworkController : NSObject

{
    long long _networkSelectionMode;
    TPSCellularNetworkItem *_selectedNetworkItem;
    NSArray *_networkItems;
    TPSRegistrationTelephonyController *_registrationController;
    NSArray *_networks;
    CTNetworkSelectionInfo *_networkSelectionInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (copy, nonatomic) NSArray *networkItems;
@property (nonatomic) long long networkSelectionMode;
@property (retain, nonatomic) TPSCellularNetworkItem *selectedNetworkItem;
@property (nonatomic, readonly) TPSRegistrationTelephonyController *registrationController;
@property (copy, nonatomic) NSArray *networks;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, readonly, getter=isNetworkSelectionEnabled) _Bool networkSelectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)networksChangedForRegistrationController:(id)arg1;
- (void)networkSelectionInfoChangedForRegistrationController:(id)arg1;
- (void)updateSelectedNetworkForNetworkSelectionInfo:(id)arg1;
- (void)updateNetworkSelectionModeForNetworkSelectionInfo:(id)arg1;
- (id)networkItemForNetwork:(id)arg1;
- (id)networkItemAtIndex:(long long)arg1;
- (void)selectNetworkItemAtIndex:(unsigned long long)arg1;
- (void)selectNetworkSelectionMode:(long long)arg1;

@end
