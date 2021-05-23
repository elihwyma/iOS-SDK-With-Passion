/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject

{
    _Bool _holdQueue;
    id _delegate;
    id _target;
    double _dequeueRate;
    NSMutableArray *_queue;
    NSMutableArray *_options;
    NSProtocolChecker *_protocolChecker;
}

@property (nonatomic, readonly) _Bool holdQueue;
@property (retain, nonatomic, readonly) NSMutableArray *queue;
@property (retain, nonatomic, readonly) NSMutableArray *options;
@property (retain, nonatomic, readonly) NSProtocolChecker *protocolChecker;
@property (retain, nonatomic) Protocol *protocol;
@property id target;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)peek;
- (unsigned long long)_optionsForInvocation:(id)arg1;
- (long long)_enqueueInvocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_invokeInvocation:(id)arg1;
- (void)_setQueueTimer;
- (void)_checkQueue;
- (id)_dequeueInvocation;
- (int)_numberOfLimitedMessagesInQueue;
- (int)_maxQueueLimitSize;
- (_Bool)_acceptsOptions:(unsigned long long)arg1;
- (_Bool)_replaceSimilarInvocation:(id)arg1;
- (_Bool)_insertInvocation:(id)arg1 options:(unsigned long long)arg2;
- (void)_stepQueueNotification:(id)arg1;
- (void)_holdQueueNotification:(id)arg1;
- (void)_releaseQueueNotification:(id)arg1;
- (void)removeAllInvocations;
- (void)invokeAll;

@end
