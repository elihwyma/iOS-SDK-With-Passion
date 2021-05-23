/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

#import <SidecarCore/Swift-Protocol.h>

@protocol SidecarServicePresenterDelegate, SidecarSessionDelegate;

__attribute__((visibility("hidden")))
@interface SidecarCoreProxy : NSObject <Swift>

{
    id <SidecarSessionDelegate> _delegate;
    id <SidecarServicePresenterDelegate> _presenterDelegate;
}

@property (retain, nonatomic) id <SidecarSessionDelegate> delegate;
@property (retain, nonatomic) id <SidecarServicePresenterDelegate> presenterDelegate;

+ (id)defaultProxy;

- (void)relaySession:(id)arg1 openedByDevice:(id)arg2 dataLink:(long long)arg3 service:(id)arg4;
- (void)relaySession:(long long)arg1 receivedOPACKData:(id)arg2 dataLink:(long long)arg3;
- (void)relaySession:(long long)arg1 closedWithError:(id)arg2;
- (void)relaySession:(long long)arg1 stream:(id)arg2 status:(unsigned long long)arg3;
- (void)relayPresenterStartServiceExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)relayPresenterServiceExtensionReady:(id)arg1;
- (void)relayTerminateService;

@end
