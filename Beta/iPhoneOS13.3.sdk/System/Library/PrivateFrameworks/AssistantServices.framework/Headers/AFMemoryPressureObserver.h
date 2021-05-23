/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMemoryPressureObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureFlags;
    NSHashTable *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedObserver;

- (void)dealloc;
- (void)invalidate;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)removeAllListeners;
- (void)_startObservingMemoryPressureWithOptions:(unsigned long long)arg1;
- (void)_stopObservingMemoryPressure;
- (void)_addListener:(id)arg1;
- (void)_removeListener:(id)arg1;
- (void)_removeAllListeners;
- (void)_handleMemoryPressureWithFlags:(unsigned long long)arg1;
- (void)getCurrentConditionWithCompletion:(CDUnknownBlockType)arg1;

@end
