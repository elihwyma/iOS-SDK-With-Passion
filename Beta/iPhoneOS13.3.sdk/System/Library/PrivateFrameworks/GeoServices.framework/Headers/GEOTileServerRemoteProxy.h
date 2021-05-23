/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOTileServerProxy.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy

{
    NSObject<OS_dispatch_queue> *_connectionReplyQueue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionSendIsolation;
}

- (void)dealloc;
- (void)open;
- (void)close;
- (void)_sendMessage:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)_handleError:(id)arg1;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;
- (void)cancel:(const struct _GEOTileKey *)arg1 batchID:(int)arg2;
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const struct _GEOTileKey *)arg2 options:(unsigned long long)arg3;
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2 batchID:(int)arg3;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(_Bool)arg2;
- (void)endPreloadSession;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (unsigned long long)calculateFreeableSizeSync;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned int *)arg3 hasAdditionalInfos:(const _Bool *)arg4 additionalInfos:(const struct GEOTileLoaderAdditionalInfo *)arg5 signpostIDs:(const unsigned long long *)arg6 createTimes:(const double *)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10;
- (void)flushPendingWrites;
- (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)_handleTile:(id)arg1;
- (void)_handleNetworkBegan:(id)arg1;
- (void)_handleEditionUpgrade:(id)arg1;
- (_Bool)_sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)_sendMessageWithReplySync:(id)arg1;

@end
