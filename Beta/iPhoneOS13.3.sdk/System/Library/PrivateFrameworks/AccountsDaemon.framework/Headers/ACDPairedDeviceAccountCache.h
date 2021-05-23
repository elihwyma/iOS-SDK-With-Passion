/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ACDPairedDeviceAccountCache : NSObject

{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    _Bool _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}

+ (id)sharedInstance;

- (id)init;
- (void)invalidate;
- (void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didFetchAccounts:(id)arg1 error:(id)arg2;

@end
