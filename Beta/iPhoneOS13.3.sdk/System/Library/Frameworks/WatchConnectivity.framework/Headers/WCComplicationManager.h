/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, WCComplicationManagerDelegate;

@interface WCComplicationManager : NSObject

{
    NSObject<WCComplicationManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) NSObject<WCComplicationManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)xpcManager:(id)arg1 handlePingForExtensionBundleID:(id)arg2;
- (void)xpcManager:(id)arg1 isExtensionPrivileged:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)xpcManager:(id)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(CDUnknownBlockType)arg2;

@end
