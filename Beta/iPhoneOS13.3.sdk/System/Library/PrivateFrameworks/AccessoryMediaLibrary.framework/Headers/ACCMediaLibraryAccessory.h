/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class ACCMediaLibraryProvider, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ACCMediaLibraryAccessory : NSObject

{
    unsigned int _windowPerLibrary;
    NSString *_accessoryUID;
    ACCMediaLibraryProvider *_provider;
    NSMutableDictionary *_libraries;
    NSMutableDictionary *_pendingUpdates;
    NSMutableDictionary *_waitingConfirm;
    NSMutableDictionary *_pendingPlaylistContentUpdates;
    NSMutableDictionary *_confirmedRevisionList;
    NSObject<OS_dispatch_queue> *_listQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *libraries;
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates;
@property (retain, nonatomic) NSMutableDictionary *waitingConfirm;
@property (retain, nonatomic) NSMutableDictionary *pendingPlaylistContentUpdates;
@property (retain, nonatomic) NSMutableDictionary *confirmedRevisionList;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *listQueue;
@property (nonatomic, readonly) NSString *accessoryUID;
@property (weak, nonatomic, readonly) ACCMediaLibraryProvider *provider;
@property (nonatomic) unsigned int windowPerLibrary;

- (void)dealloc;
- (id)description;
- (id)_pendingUpdatesForLibrary:(id)arg1 createIfNotExist:(_Bool)arg2;
- (unsigned long long)_pendingAndWaitingConfirmUpdatesCountForLibrary:(id)arg1;
- (id)_pendingPlaylistContentUpdatesForLibrary:(id)arg1 createIfNotExist:(_Bool)arg2;
- (unsigned long long)_pendingPlaylistContentUpdatesCountForLibrary:(id)arg1;
- (_Bool)_pendingUpdatesAndWaitingConfirmFullForLibrary:(id)arg1;
- (id)_waitingUpdatesForLibrary:(id)arg1 createIfNotExist:(_Bool)arg2;
- (id)_confirmedRevisionListForLibrary:(id)arg1 createIfNotExist:(_Bool)arg2;
- (void)_addToWaitlistForLibrary:(id)arg1 list:(id)arg2;
- (void)_pendingUpdatesRemoveLibraryIfEmpty:(id)arg1;
- (void)_pendingPlaylistContentUpdatesRemoveLibraryIfEmpty:(id)arg1;
- (void)_confirmedRevisionListRemoveLibraryIfEmpty:(id)arg1;
- (_Bool)pendingUpdatesAndWaitingConfirmFullForLibrary:(id)arg1;
- (unsigned long long)pendingAndWaitingConfirmUpdatesCountForLibrary:(id)arg1;
- (void)_waitingUpdatesRemoveLibraryIfEmpty:(id)arg1;
- (void)_addConfirmedRevisionForLibrary:(id)arg1 revisionsToAdd:(id)arg2;
- (unsigned long long)pendingPlaylistContentUpdatesCountForLibrary:(id)arg1;
- (id)initWithUID:(id)arg1 windowPerLibrary:(unsigned int)arg2 provider:(id)arg3;
- (void)addLibraryInfo:(id)arg1;
- (void)_addToWaitlistForLibrary:(id)arg1 item:(id)arg2;
- (void)_addConfirmedRevisionForLibrary:(id)arg1 revision:(id)arg2;
- (id)copyPendingNonContentUpdatesToSendForLibrary:(id)arg1;
- (id)copyPendingPlaylistContentUpdatesToSendForLibrary:(id)arg1;
- (_Bool)addUpdate:(id)arg1 library:(id)arg2;
- (_Bool)addPlaylistContentUpdate:(id)arg1 library:(id)arg2;
- (id)confirmUpdates:(id)arg1 revision:(id)arg2 count:(unsigned int)arg3;
- (void)confirmPlaylistContentUpdates:(id)arg1 revision:(id)arg2;
- (void)clearAllUpdates;

@end
