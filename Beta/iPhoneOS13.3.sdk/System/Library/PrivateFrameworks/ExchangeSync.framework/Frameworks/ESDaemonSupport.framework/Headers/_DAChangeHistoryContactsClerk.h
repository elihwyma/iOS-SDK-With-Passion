/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/DAChangeHistoryClerk.h>

@class CNContactStore;

@interface _DAChangeHistoryContactsClerk : DAChangeHistoryClerk

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

+ (id)os_log;

- (id)initWithContactStore:(id)arg1;
- (void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2;
- (void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2;
- (id)identifiersOfAllRegisterdClients;

@end
