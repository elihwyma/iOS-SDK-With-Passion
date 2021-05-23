/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCThrottler, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAccountOnlinePerformer : NSObject

{
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    BRCThrottler *_throttler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)addPerformer:(id)arg1;
+ (void)removePerformer:(id)arg1;

- (id)_key;
- (void)perform;
- (id)initWithAccountID:(id)arg1;
- (void)_close;
- (void)networkReachabilityChanged:(_Bool)arg1;
- (void)resumeAndAutoClose;

@end
