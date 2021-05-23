/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol WBSCyclerTestTarget;

@interface WBSCyclerTestTargetProxyController : NSObject

{
    NSXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) CDUnknownBlockType disconnectionHandler;
@property (nonatomic, readonly) id <WBSCyclerTestTarget> testTargetProxy;

- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;

@end
