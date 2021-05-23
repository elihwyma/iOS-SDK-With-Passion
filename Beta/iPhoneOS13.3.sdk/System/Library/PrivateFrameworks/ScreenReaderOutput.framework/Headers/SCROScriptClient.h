/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSLock, SCRCTargetSelectorTimer, SCROConnection;

@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject

{
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    _Bool _isReady;
    NSObject<OS_dispatch_queue> *__scriptDispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue;

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (_Bool)_isReady;
- (void)handleCallback:(id)arg1;
- (id)_lazyConnection;
- (void)_killConnection;
- (_Bool)runScriptFile:(id)arg1;

@end
