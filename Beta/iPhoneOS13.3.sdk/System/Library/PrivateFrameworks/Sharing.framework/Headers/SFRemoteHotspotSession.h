/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SFRemoteHotspotProtocol, SFRemoteHotspotSessionDelegate;

@interface SFRemoteHotspotSession : NSObject

{
    _Bool _browsing;
    id <SFRemoteHotspotSessionDelegate> _delegate;
    id <SFRemoteHotspotProtocol> _connectionProxy;
}

@property _Bool browsing;
@property (retain) id <SFRemoteHotspotProtocol> connectionProxy;
@property (weak) id <SFRemoteHotspotSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updatedFoundDeviceList:(id)arg1;
- (void)xpcManagerConnectionInterrupted;
- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
