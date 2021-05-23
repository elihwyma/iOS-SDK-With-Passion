/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSOutputStream.h>

@class NSMutableDictionary, NSObject, NSRunLoop;

@protocol NSStreamDelegate, OS_dispatch_queue;

@interface MRAVBufferedOutputStream : NSOutputStream

{
    unsigned long long _status;
    id <NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToMemory;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;
- (void)_init;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;

@end
