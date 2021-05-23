/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <Foundation/NSObject.h>

@interface DAChangeHistoryClerk : NSObject

+ (id)clerkWithContactStore:(id)arg1;
+ (id)clerkWithAddressBook:(void *)arg1;

- (void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2;
- (void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2;
- (id)identifiersOfAllRegisterdClients;

@end
