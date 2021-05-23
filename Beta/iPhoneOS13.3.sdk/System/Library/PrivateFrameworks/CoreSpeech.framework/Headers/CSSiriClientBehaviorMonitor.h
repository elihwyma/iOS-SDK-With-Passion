/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject

{
    _Bool _isStreaming;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) _Bool isStreaming;

+ (id)sharedInstance;

- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2;
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(_Bool)arg2 option:(id)arg3;
- (void)notifyWillStopStream:(id)arg1;
- (void)notifyDidStopStream:(id)arg1;

@end
