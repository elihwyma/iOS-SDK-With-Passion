/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCloudContext, FCKeyValueStore, NSMutableArray, NSString;

@protocol FCCommandQueueDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface FCCommandQueue : NSObject

{
    _Bool _suspended;
    _Bool _executingCommand;
    FCCloudContext *_context;
    NSString *_persistentStorePath;
    NSString *_name;
    FCKeyValueStore *_persistentStore;
    long long _urgency;
    id <FCCommandQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingCommands;
    NSObject<OS_dispatch_source> *_cooldownTimer;
    NSObject<OS_dispatch_group> *_pendingCommandsGroup;
    NSObject<OS_dispatch_group> *_executingCommandsGroup;
}

@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *persistentStorePath;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) FCKeyValueStore *persistentStore;
@property (nonatomic) long long urgency;
@property (weak, nonatomic) id <FCCommandQueueDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (retain, nonatomic) NSMutableArray *pendingCommands;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *cooldownTimer;
@property (nonatomic, getter=isExecutingCommand) _Bool executingCommand;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pendingCommandsGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *executingCommandsGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedWorkQueue;

- (void)dealloc;
- (void)clear;
- (void)resume;
- (_Bool)_isEmpty;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_applicationDidEnterBackground;
- (void)_loadFromDisk;
- (void)addCommand:(id)arg1;
- (void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2;
- (void)activityObservingApplicationDidEnterBackground;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(_Bool)arg5 delegate:(id)arg6;
- (id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(_Bool)arg3 delegate:(id)arg4;
- (id)initWithContext:(id)arg1 persistentStorePath:(id)arg2 urgency:(long long)arg3 suspended:(_Bool)arg4 delegate:(id)arg5;
- (void)_scheduleCommandExecution;
- (void)_addCommand:(id)arg1 saveCompletion:(CDUnknownBlockType)arg2;
- (void)_savePendingCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_executeNextCommand;
- (long long)_qualityOfServiceForCommand:(id)arg1;
- (id)_deserializeCommandsFromStore:(id)arg1;
- (void)_serializeCommands:(id)arg1 toStore:(id)arg2;
- (id)_encodeCommand:(id)arg1;
- (id)_decodeCommand:(id)arg1;
- (void)addCommand:(id)arg1 saveCompletion:(CDUnknownBlockType)arg2;

@end
