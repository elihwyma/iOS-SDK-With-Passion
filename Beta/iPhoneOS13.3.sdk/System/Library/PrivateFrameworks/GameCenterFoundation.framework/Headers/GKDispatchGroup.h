/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKActivity, GKThreadsafeDictionary, NSError, NSString;

@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject

{
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    NSError *_error;
    id result;
    int _sequence;
    _Bool _loggingEnabled;
    id _result;
    GKActivity *_activity;
}

@property (retain) GKActivity *activity;
@property (retain) NSError *error;
@property (retain) id result;
@property (nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled;

+ (id)mainQueue;
+ (id)dispatchGroup;
+ (void)waitUntilDone:(CDUnknownBlockType)arg1;
+ (id)backgroundConcurrentQueue;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)defaultConcurrentQueue;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)allValues;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)_values;
- (id)initWithName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)wait;
- (void)perform:(CDUnknownBlockType)arg1;
- (long long)waitWithTimeout:(double)arg1;
- (void)leave;
- (void)enter;
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)join:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)_waitWithDispatchTimeout:(unsigned long long)arg1;

@end
