/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSMapTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PLFileSystemVolumeManager : NSObject

{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSFileManager *_fileManager;
    NSMutableDictionary *_mountedVolumeURLsByUuid;
    NSMutableDictionary *_registeredFileSystemVolumesByUuid;
    NSMapTable *_mocsByVolume;
}

+ (id)sharedFileSystemVolumeManager;

- (void)dealloc;
- (id)initSharedVolumeManager;
- (id)volumeForURL:(id)arg1 context:(id)arg2;
- (void)registerPLFileSystemVolume:(id)arg1;
- (void)unregisterPLFileSystemVolume:(id)arg1;
- (void)_updateOfflineStates;
- (void)_updateMountedVolumeURLs;

@end
