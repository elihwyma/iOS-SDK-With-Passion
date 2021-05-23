/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, PKPassLibrary;

@protocol OS_dispatch_queue;

@interface WiFiWalletSource : NSObject

{
    CDUnknownBlockType changeHandler;
    CDUnknownBlockType relevancyHandler;
    PKPassLibrary *_passLibrary;
    NSMutableDictionary *_networks;
    NSMutableSet *_relevantPassIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) PKPassLibrary *passLibrary;
@property (retain, nonatomic) NSMutableDictionary *networks;
@property (retain, nonatomic) NSMutableSet *relevantPassIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType changeHandler;
@property (copy, nonatomic) CDUnknownBlockType relevancyHandler;

- (id)init;
- (void)dealloc;
- (id)initWithChangeHandler:(CDUnknownBlockType)arg1;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_initializeWiFiPasses;
- (void)_passLibraryDidBecomeRelevantNotification:(id)arg1;
- (void)_addPass:(id)arg1;
- (void)_handleRelevantPassUpdate:(id)arg1;
- (id)_createWiFiWalletPassFromPass:(id)arg1;
- (void)_removeRelevantPasses;
- (void)_handlePassLibraryChange:(id)arg1;
- (void)_passDidBecomeRelevant:(id)arg1;
- (id)_networksWithIdentifier:(id)arg1;
- (void)_issueRelevancyCallbackWithRelevantNetworks:(id)arg1 notRelevantNetworks:(id)arg2;
- (id)relevantNetworks;
- (id)candidateNetworks;

@end
