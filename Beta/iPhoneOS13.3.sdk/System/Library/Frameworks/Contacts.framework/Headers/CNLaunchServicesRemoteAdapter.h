/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@interface CNLaunchServicesRemoteAdapter : NSObject

+ (id)launchServicesAdapterInterface;
+ (id)createConnectionWithInterface:(id)arg1;

- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(CDUnknownBlockType)arg3;

@end
