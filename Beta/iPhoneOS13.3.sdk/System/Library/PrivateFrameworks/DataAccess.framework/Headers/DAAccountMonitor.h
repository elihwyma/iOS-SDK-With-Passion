/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface DAAccountMonitor : NSObject

{
    NSHashTable *_accounts;
    NSObject<OS_dispatch_queue> *_accountsQueue;
}

@property (retain, nonatomic) NSHashTable *accounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountsQueue;

+ (id)sharedMonitor;

- (id)init;
- (void)unmonitorAccount:(id)arg1;
- (void)monitorAccount:(id)arg1;
- (id)monitoredAccounts;

@end
