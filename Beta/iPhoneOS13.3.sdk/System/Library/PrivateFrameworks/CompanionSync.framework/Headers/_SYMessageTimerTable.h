/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _SYMessageTimerTable : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_rwlock;
    NSMutableDictionary *_bySeqno;
    NSMutableDictionary *_byIdent;
}

@property (nonatomic, readonly) unsigned long long timerCount;

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 timerCallback:(CDUnknownBlockType)arg2;
- (void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2;
- (void)cancelTimerForSequenceNumber:(unsigned long long)arg1;
- (void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2;
- (void)cancelTimerForIdentifier:(id)arg1;
- (void)_fireCallbackForSeqno:(unsigned long long)arg1;
- (void)_cleanupTimerForSeqno:(unsigned long long)arg1;
- (void)cancelAllTimers;

@end
