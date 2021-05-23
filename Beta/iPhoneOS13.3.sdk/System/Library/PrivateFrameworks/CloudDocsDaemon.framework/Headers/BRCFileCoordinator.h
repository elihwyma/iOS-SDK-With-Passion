/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSFileCoordinator.h>

@class BRCAccountSession, NSObject, NSURL;

@protocol OS_dispatch_source;

@interface BRCFileCoordinator : NSFileCoordinator

{
    BRCAccountSession *_session;
    unsigned long long _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _doneHandler;
    _Bool _cancelled;
    _Bool _isUpdateForReconnecting;
    _Bool _forRead;
}

@property (nonatomic) _Bool isUpdateForReconnecting;
@property (nonatomic, readonly) _Bool forRead;

+ (void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemAtPath:(id)arg1 origLogicalName:(id)arg2 didBounceToNewLogicalName:(id)arg3;
+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(_Bool)arg5;

- (void)cancel;
- (id)initWithSession:(id)arg1 forRead:(_Bool)arg2 doneHandler:(CDUnknownBlockType)arg3;
- (void)cancelAfterDelay:(double)arg1;
- (void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3;
- (void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(CDUnknownBlockType)arg5 fcHandler:(CDUnknownBlockType)arg6 error:(id)arg7;
- (void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(CDUnknownBlockType)arg4;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(_Bool)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(CDUnknownBlockType)arg6;

@end
