/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;

@protocol ACCMediaLibraryProviderDelegateProtocol, ACCMediaLibraryXPCServerProtocol, OS_dispatch_queue;

@interface ACCMediaLibraryProvider : NSObject

{
    int _lastUpdateType;
    id <ACCMediaLibraryProviderDelegateProtocol> _delegate;
    NSXPCConnection *_serverConnection;
    NSString *_providerUID;
    NSObject<OS_dispatch_queue> *_delegateQ;
    id <ACCMediaLibraryXPCServerProtocol> _remoteObject;
    NSMutableDictionary *_accessories;
    NSMutableDictionary *_libraries;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (weak, nonatomic) id <ACCMediaLibraryProviderDelegateProtocol> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQ;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id <ACCMediaLibraryXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSMutableDictionary *libraries;
@property (nonatomic) int lastUpdateType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSString *providerUID;

- (void)dealloc;
- (id)description;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)connectToServer;
- (void)notify:(id)arg1 stateChange:(int)arg2 enabled:(_Bool)arg3;
- (long long)update:(id)arg1 revision:(id)arg2 content:(id)arg3 accessory:(id)arg4;
- (void)resetUpdate:(id)arg1 accessory:(id)arg2;
- (void)accessoryMediaLibraryAttached:(id)arg1 windowPerLibrary:(unsigned int)arg2;
- (void)accessoryMediaLibraryDetached:(id)arg1;
- (void)accessoryMediaLibraryUpdate:(id)arg1 windowPerLibrary:(unsigned int)arg2;
- (void)startMediaLibraryUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 mediaItemProperties:(unsigned long long)arg4 playlistProperties:(unsigned long long)arg5 playlistContentStyle:(int)arg6 playlistContentProperties:(unsigned long long)arg7 reqOptions:(unsigned long long)arg8;
- (void)stopMediaLibraryUpdate:(id)arg1 library:(id)arg2;
- (void)stopAllMediaLibraryUpdate:(id)arg1;
- (void)confirmUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 updateCount:(unsigned int)arg4;
- (void)confirmPlaylistContentUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3;
- (void)playCurrentSelection:(id)arg1 library:(id)arg2;
- (void)playItems:(id)arg1 library:(id)arg2 itemList:(id)arg3 startIndex:(unsigned int)arg4;
- (void)playCollection:(id)arg1 library:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 startItem:(unsigned long long)arg5;
- (void)playCollection:(id)arg1 library:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 startIndex:(unsigned int)arg5;
- (void)playAllSongs:(id)arg1 library:(id)arg2 startItem:(unsigned long long)arg3;
- (void)accessoryMediaLibraryAllDetached;
- (void)_notifyRemoteOfAvailableLibraries;
- (void)_checkPlaylistContentToSend:(id)arg1 accessory:(id)arg2;
- (void)flushUpdates:(id)arg1 accessory:(id)arg2;
- (long long)update:(id)arg1 revision:(id)arg2 persistentID:(unsigned long long)arg3 type:(int)arg4 updateInfo:(id)arg5 progress:(unsigned char)arg6 accessory:(id)arg7;
- (void)notifyAvailableLibraries:(id)arg1;
- (long long)update:(id)arg1 revision:(id)arg2 item:(id)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 playlist:(id)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 deleteItem:(unsigned long long)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 deletePlaylist:(unsigned long long)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 progress:(unsigned char)arg3 accessory:(id)arg4;

@end
