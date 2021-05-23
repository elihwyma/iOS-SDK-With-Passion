/*
 Image: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionInfo, CoreTelephonyClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface PSSimStatusCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_coreTelephonyClient;
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;
    NSMutableDictionary *_simStatusDict;
}

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain) NSMutableDictionary *simStatusDict;
@property (nonatomic, readonly) _Bool isDualSimCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)willEnterForeground;
- (void)subscriptionInfoDidChange;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)subscriptionsInUse;
- (id)initPrivate;
- (id)subscriptionContexts;
- (id)simStatus:(id)arg1;
- (void)fetchSubscriptionContexts;
- (void)fetchSimStatus;

@end
