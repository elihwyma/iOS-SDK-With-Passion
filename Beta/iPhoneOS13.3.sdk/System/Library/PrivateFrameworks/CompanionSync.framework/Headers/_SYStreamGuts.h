/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSError, NSMutableDictionary;

@protocol NSStreamDelegate, OS_dispatch_queue;

@interface _SYStreamGuts : NSObject

{
    struct __CFRunLoopSource *_runloopSource;
    unsigned int _port;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    id <NSStreamDelegate> _delegate;
    NSError *_error;
    unsigned long long _status;
    NSMutableDictionary *_propertyStore;
}

- (void)dealloc;
- (id)propertyForKey:(id)arg1;
- (void)storeProperty:(id)arg1 forKey:(id)arg2;
- (void)setEventHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)createRunloopSourceForStream:(id)arg1;
- (void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2;

@end
