/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface HFDebugStateDumpManager : NSObject

{
    int _logStateDumpNotifyToken;
    NSObject<OS_dispatch_queue> *_stateHandlerQueue;
    NSMutableDictionary *_stateDumpHandlersByName;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateHandlerQueue;
@property (retain, nonatomic) NSMutableDictionary *stateDumpHandlersByName;
@property (nonatomic, readonly) int logStateDumpNotifyToken;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)registerStateDumpHandler:(CDUnknownBlockType)arg1 withName:(id)arg2;
- (id)performStateDump:(_Bool)arg1;

@end
