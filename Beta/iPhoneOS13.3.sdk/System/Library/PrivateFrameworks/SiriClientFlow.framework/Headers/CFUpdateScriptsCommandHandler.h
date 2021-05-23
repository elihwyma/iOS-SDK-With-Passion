/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SACFClientFlowUpdateScriptsCommand.h>

@class CFScriptDownloadManager, NSObject, NSString;

@protocol CFScripting, OS_dispatch_queue;

@interface CFUpdateScriptsCommandHandler : SACFClientFlowUpdateScriptsCommand

{
    _Bool _scriptUpdateSuccess;
    id <CFScripting> _clientScripter;
    NSString *_scriptsCachePath;
    unsigned long long _scriptsUpdateCount;
    NSObject<OS_dispatch_queue> *_updateScriptsQueue;
    CFScriptDownloadManager *_downloadManager;
    CDUnknownBlockType _updateScriptsCompletion;
}

@property (retain) id <CFScripting> clientScripter;
@property (retain) NSString *scriptsCachePath;
@property unsigned long long scriptsUpdateCount;
@property _Bool scriptUpdateSuccess;
@property (retain) NSObject<OS_dispatch_queue> *updateScriptsQueue;
@property (retain) CFScriptDownloadManager *downloadManager;
@property (copy) CDUnknownBlockType updateScriptsCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)cachePath;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldRetryForError:(id)arg1;
- (void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;
- (void)downloadedScript:(id)arg1;
- (void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;
- (void)_updateScriptsCompletedForScriptIdentifier:(id)arg1 success:(_Bool)arg2;
- (void)_updateScriptCacheForScript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateScripts:(id)arg1 remaningAttempts:(long long)arg2;
- (void)_updateScriptCacheForScriptArchiveAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
