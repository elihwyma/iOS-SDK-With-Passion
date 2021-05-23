/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface AFUIDebugLogManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly, getter=_queue) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly, getter=_baseLogDirectoryURL) NSURL *baseLogDirectoryURL;
@property (copy, nonatomic, readonly, getter=_siriLogDirectoryURL) NSURL *siriLogDirectoryURL;

+ (int)executeSystemCommand:(id)arg1 stdoutTo:(id)arg2;

- (id)init;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id *)arg4;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id *)arg4;
- (id)_siriCardLogDirectoryURL;
- (void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 pattern:(id)arg4 mimeType:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_captureLogsInDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 withMimeType:(id)arg3 attemptCompression:(_Bool)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)_uniqueTemporaryFileURL;
- (id)_archiveLogDirectoryAtURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)_captureFileAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)captureViewHierarchyLogWithDefaultViewHierarchy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)captureCardLogsSinceTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)captureSiriSpeechLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureSiriVoiceTriggerLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureSiriRemembersLogWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureSiriTTSAudioWithCompletion:(CDUnknownBlockType)arg1;
- (void)capturePreviousConversationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 completion:(CDUnknownBlockType)arg4;

@end
