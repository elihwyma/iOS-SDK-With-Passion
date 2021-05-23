/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <AdCore/ADSingleton.h>

@class NSMutableArray, NSObject, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface ADIDManagerService : ADSingleton

{
    NSObject<OS_dispatch_queue> *_forceReconcileQueue;
    NSXPCListener *_listener;
    NSMutableArray *_reconcileArray;
}

@property (retain) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableArray *reconcileArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)forceReconcile:(CDUnknownBlockType)arg1;
- (unsigned long long)delayForNewForceReconcileRequest;

@end
