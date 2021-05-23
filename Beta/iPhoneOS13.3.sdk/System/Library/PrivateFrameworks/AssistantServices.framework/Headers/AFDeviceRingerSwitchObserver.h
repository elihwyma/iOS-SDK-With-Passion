/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFNotifyObserver, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface AFDeviceRingerSwitchObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyObserver *_notifyObserver;
    NSHashTable *_listeners;
    _Bool _isActive;
}

@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedObserver;

- (id)init;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_updateStateWithNotifyState:(unsigned long long)arg1;

@end
