/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface HFUpdateLoggerDebuggingController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *__queue_runningLoggers;
    NSMutableDictionary *__queue_historyStringsKeyedByLogger;
    long long __queue_iteration;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *_queue_runningLoggers;
@property (retain, nonatomic) NSMutableDictionary *_queue_historyStringsKeyedByLogger;
@property (nonatomic) long long _queue_iteration;

+ (id)_sharedInstance;

- (id)init;
- (id)_runningLoggerStrings;
- (void)_addRunningLogger:(id)arg1;
- (void)_removeRunningLogger:(id)arg1;
- (id)_runningLoggers;
- (id)_historyStrings;

@end
