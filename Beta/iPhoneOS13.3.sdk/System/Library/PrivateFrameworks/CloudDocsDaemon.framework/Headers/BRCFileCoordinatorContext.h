/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class brc_task_tracker;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFileCoordinatorContext : NSObject

{
    int _startTracingCode;
    int _endTracingCode;
    brc_task_tracker *_tracker;
    unsigned long long _sections;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) brc_task_tracker *tracker;
@property (nonatomic) unsigned long long sections;
@property (nonatomic) int startTracingCode;
@property (nonatomic) int endTracingCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithTracker:(id)arg1 queue:(id)arg2 startCode:(int)arg3 endCode:(int)arg4;

@end
