/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAccountStore.h>

@interface VSTopShelfPurgingAccountStore : VSAccountStore

- (void)saveAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_purgeTopShelfContent;

@end
