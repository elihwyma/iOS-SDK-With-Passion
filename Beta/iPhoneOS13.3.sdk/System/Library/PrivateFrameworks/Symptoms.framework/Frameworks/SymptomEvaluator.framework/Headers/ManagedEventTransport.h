/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_xpc_object;

@interface ManagedEventTransport : NSObject

{
    unsigned long long _event_id;
    NSObject<OS_xpc_object> *_listener;
    NSMutableDictionary *_dynamicEventHandlers;
    NSMutableDictionary *_staticEventHandlers;
}

+ (id)sharedInstance;
+ (_Bool)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2;
+ (id)feedbackForEventId:(unsigned long long)arg1;
+ (unsigned long long)obtainEventId:(id)arg1;
+ (void)retireEventId:(unsigned long long)arg1;
+ (void)setListeningPort:(const char *)arg1;

- (id)init;
- (_Bool)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2;
- (id)feedbackForEventId:(unsigned long long)arg1;
- (unsigned long long)obtainEventId:(id)arg1;
- (void)retireEventId:(unsigned long long)arg1;
- (int)_uncondenseParams:(id)arg1 to:(id)arg2;
- (void)_condenseParams:(id)arg1 onTo:(id)arg2;
- (void)sendReplyInfo:(id)arg1 onConnection:(id)arg2 withErrCode:(unsigned long long)arg3 forId:(unsigned long long)arg4 name:(char *)arg5 date:(id)arg6 reason:(char *)arg7 reasonCode:(unsigned long long)arg8 info:(id)arg9;
- (void)_populateConfigReply:(id)arg1 forRequest:(id)arg2 applyConfig:(_Bool)arg3;
- (void)_populateCondensedReply:(id)arg1 forRequest:(id)arg2 applyConfig:(_Bool)arg3;
- (void)_createReply:(id)arg1 forConnection:(id)arg2;
- (void)setListeningPort:(const char *)arg1;

@end
