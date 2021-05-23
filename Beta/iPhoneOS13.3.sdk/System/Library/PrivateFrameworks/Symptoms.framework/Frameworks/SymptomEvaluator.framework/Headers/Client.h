/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface Client : NSObject

{
    long long _activeMessageCount;
    long long _barrierMessageCount;
    long long _droppedMessageCount;
    _Bool _shouldSendMessages;
    _Bool _forceUpdateOnWake;
    NSXPCConnection *_connection;
    NSMutableSet *_subscribedNOIs;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableSet *subscribedNOIs;

- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_shouldSendMessages;
- (void)_incrementMessageCounter:(long long)arg1;
- (void)_decrementMessageCounter:(long long)arg1;
- (void)_sendBarrierIfNecessaryWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithConn:(id)arg1;

@end
