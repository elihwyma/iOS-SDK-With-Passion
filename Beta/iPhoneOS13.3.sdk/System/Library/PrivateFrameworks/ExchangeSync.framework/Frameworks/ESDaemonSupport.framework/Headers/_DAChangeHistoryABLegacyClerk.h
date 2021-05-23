/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/DAChangeHistoryClerk.h>

@interface _DAChangeHistoryABLegacyClerk : DAChangeHistoryClerk

{
    void *_addressBook;
}

@property (nonatomic, readonly) void *addressBook;

- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2;
- (void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2;
- (id)identifiersOfAllRegisterdClients;

@end
