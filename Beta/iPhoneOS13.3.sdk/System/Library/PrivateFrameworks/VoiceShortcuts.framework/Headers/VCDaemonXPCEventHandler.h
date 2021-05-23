/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSArray, NSMapTable;

@protocol OS_dispatch_queue;

@interface VCDaemonXPCEventHandler : NSObject

{
    NSArray *_streams;
    NSMapTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSMapTable *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSArray *streams;

- (void)resume;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (id)initWithStreams:(id)arg1;
- (id)initWithStreams:(id)arg1 queue:(id)arg2;
- (void)handleEvent:(id)arg1 fromStream:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;

@end
