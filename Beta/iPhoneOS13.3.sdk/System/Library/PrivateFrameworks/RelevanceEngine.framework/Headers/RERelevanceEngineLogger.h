/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REObserverStore;

@protocol OS_dispatch_queue;

@interface RERelevanceEngineLogger : NSObject

{
    REObserverStore *_loggables;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)addLoggable:(id)arg1;
- (void)removeLoggable:(id)arg1;
- (void)collectLogs:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateLoggables:(CDUnknownBlockType)arg1;

@end
