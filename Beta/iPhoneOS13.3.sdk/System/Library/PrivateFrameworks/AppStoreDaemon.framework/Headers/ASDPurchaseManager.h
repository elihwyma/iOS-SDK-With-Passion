/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseManager : NSObject

{
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interface;
+ (id)sharedManager;

- (id)init;
- (id)_initWithServiceBroker:(id)arg1;
- (id)adopt:(id)arg1;
- (id)adoptableBundleIdentifiers;
- (void)processPurchase:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)startPurchase:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)checkAutomaticDownloadQueue;
- (void)checkPendingQueue;
- (void)checkPreflightForItemIdentifier:(id)arg1 atURL:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;

@end
