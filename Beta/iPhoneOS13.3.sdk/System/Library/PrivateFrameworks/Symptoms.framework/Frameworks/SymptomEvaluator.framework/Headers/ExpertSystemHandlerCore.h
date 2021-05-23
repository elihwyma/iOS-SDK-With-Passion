/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ExpertSystemHandlerCore : NSObject

{
    NSMutableDictionary *_activeTimers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configureClass:(id)arg1;
+ (id)internalStateDictionary;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)cancelAllTimers;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (_Bool)noteSymptom:(id)arg1;
- (void)scheduleTimerFor:(unsigned long long)arg1 leeway:(unsigned long long)arg2 identifier:(id)arg3 queue:(id)arg4 eventHandler:(CDUnknownBlockType)arg5 cancelHandler:(CDUnknownBlockType)arg6;
- (void)cancelTimerWithIdentifier:(id)arg1;

@end
