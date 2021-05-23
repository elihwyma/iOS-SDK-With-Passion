/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject

{
    NSArray *_deletedAccounts;
}

@property (nonatomic, readonly) NSArray *deletedAccounts;

+ (void)postDistributedNotificationWithAccountPairs:(id)arg1;
+ (id)notificationPayloadWithAccountPairs:(id)arg1;

- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithXPCEventStreamEvent:(id)arg1;

@end
