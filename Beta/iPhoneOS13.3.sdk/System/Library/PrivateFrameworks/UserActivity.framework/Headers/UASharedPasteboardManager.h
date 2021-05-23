/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, NSXPCConnection, UAPasteboardGeneration;

@protocol OS_dispatch_queue;

@interface UASharedPasteboardManager : NSObject

{
    _Bool _remotePasteboardAvaliable;
    _Bool _currentGenerationHasUpdates;
    _Bool _updateScheduled;
    int _disableCount;
    CDUnknownBlockType _localPasteboardWasFetched;
    UAPasteboardGeneration *_currentGeneration;
    NSObject<OS_dispatch_queue> *_serverQ;
    NSXPCConnection *_connection;
    NSXPCConnection *_controllConnection;
    id _controllSyncObject;
    NSObject<OS_dispatch_queue> *_pasteboardReadQ;
    NSSet *_disallowdTypes;
    NSSet *_bomCheckTypes;
    NSDictionary *_typeBOMs;
    NSDictionary *_typeAliases;
    CDUnknownBlockType _completionBlock;
}

@property (retain) NSObject<OS_dispatch_queue> *serverQ;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCConnection *controllConnection;
@property int disableCount;
@property (retain) id controllSyncObject;
@property _Bool remotePasteboardAvaliable;
@property _Bool currentGenerationHasUpdates;
@property _Bool updateScheduled;
@property (retain) NSObject<OS_dispatch_queue> *pasteboardReadQ;
@property (retain) NSSet *disallowdTypes;
@property (retain) NSSet *bomCheckTypes;
@property (retain) NSDictionary *typeBOMs;
@property (retain) NSDictionary *typeAliases;
@property CDUnknownBlockType completionBlock;
@property (copy) CDUnknownBlockType localPasteboardWasFetched;
@property (retain) UAPasteboardGeneration *currentGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (_Bool)dontConnectToServer;

- (id)init;
- (void)dealloc;
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(id)arg2;
- (void)clearLocalPasteboardInformation;
- (void)writeLocalPasteboardToFile:(id)arg1 itemDir:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sendUpdateToServer:(id)arg1;
- (void)doClearLocalPasteboardInfo;
- (id)serializeItem:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 intoDir:(id)arg4;
- (void)pickupLocalChanges:(id)arg1 iterNumber:(long long)arg2 cloneDir:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)serializeFileType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3 intoDir:(id)arg4;
- (id)serializeType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (void)fetchPasteboardStatus:(CDUnknownBlockType)arg1;
- (void)fetchPasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchPasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startPreventingPasteboardSharing;
- (void)stopPreventingPasteboardSharing;
- (_Bool)addData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
- (_Bool)isRemotePasteboardAvaliable;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)requestPasteboardFetchReturnEarly;

@end
