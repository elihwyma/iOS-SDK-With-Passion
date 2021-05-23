/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFairScheduler : NSObject

{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    unsigned long long _maxRegistedSourceBit;
    unsigned long long _lastVisitedBit;
    NSMutableDictionary *_sourceForBitIndex;
    _Bool _resumed;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void)close;
- (void)addSource:(id)arg1;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)schedule;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (id)sourceForBitIndex:(unsigned long long)arg1;
- (void)unregisterSources;
- (void)signalSourceForBitIndex:(unsigned long long)arg1;

@end
