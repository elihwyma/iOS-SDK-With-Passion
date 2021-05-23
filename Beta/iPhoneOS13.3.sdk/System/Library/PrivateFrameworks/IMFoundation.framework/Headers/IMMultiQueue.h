/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface IMMultiQueue : NSObject

{
    NSMutableDictionary *_queueMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (_Bool)_addBlock:(CDUnknownBlockType)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4;
- (id)loggableOverviewForKey:(id)arg1;
- (_Bool)addBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4;
- (_Bool)addBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 description:(id)arg3;
- (id)loggableOverview;

@end
