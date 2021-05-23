/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary, PKDaemonClient;

@protocol OS_dispatch_queue;

@interface PKHost : NSObject

{
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSMutableDictionary *_activeOneShots;
    NSMapTable *_discoveryMap;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_daemon;
}

@property (retain) NSMutableDictionary *activePlugIns;
@property (retain) NSMutableDictionary *activeOneShots;
@property (retain) NSMapTable *discoveryMap;
@property (retain) NSObject<OS_dispatch_queue> *hostQueue;
@property (retain) PKDaemonClient *daemon;
@property (readonly) NSDictionary *hostInfoPlist;

+ (id)defaultHost;

- (id)init;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(CDUnknownBlockType)arg3;
- (void)findPlugInByUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)findPlugInByPathURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(CDUnknownBlockType)arg3;
- (void)cancelPlugInDiscovery:(id)arg1;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;
- (void)deactivatePlugIn:(id)arg1;
- (id)activatePlugIn:(id)arg1;
- (void)accessPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 extensions:(CDUnknownBlockType)arg4;
- (void)readyPlugIns:(id)arg1 synchronously:(_Bool)arg2 environment:(id)arg3 ready:(CDUnknownBlockType)arg4;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (id)activePlugInForIdentifier:(id)arg1;

@end
