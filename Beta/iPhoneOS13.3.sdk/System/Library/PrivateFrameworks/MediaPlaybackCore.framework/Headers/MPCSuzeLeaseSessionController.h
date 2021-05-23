/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface MPCSuzeLeaseSessionController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMapTable *_leaseIDToLeaseSessionInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)_init;
- (void)suzeLeaseSession:(id)arg1 leaseRenewalDidFailWithError:(id)arg2;
- (void)stopLeaseSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startLeaseSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
