/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface SBFAnalyticsBackend : NSObject

{
    NSMutableArray *_asyncEventHandlers;
    NSMutableArray *_syncEventHandlers;
    NSMutableDictionary *_stateQueryHandlers;
    NSObject<OS_dispatch_queue> *_queryHandlerQueue;
    NSObject<OS_dispatch_queue> *_asyncHandlerQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)registerEventHandler:(id)arg1;
- (void)registerSynchronousEventHandler:(id)arg1;
- (void)registerForQueryName:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
