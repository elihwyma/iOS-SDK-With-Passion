/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDNotificationCenter, ASDServiceBroker, NSString;

@interface ASDAppLibrary : NSObject

{
    ASDServiceBroker *_serviceBroker;
    ASDNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;
+ (long long)launchApp:(id)arg1;
+ (long long)launchApp:(id)arg1 onPairedDevice:(id)arg2;
+ (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
+ (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;
+ (long long)launchMessagesExtensionForApp:(id)arg1;
+ (void)launchMessagesExtensionForApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
+ (void)uninstallApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (id)_initWithServiceBroker:(id)arg1 notificationCenter:(id)arg2;

@end
