/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class CalLogFilter, NSMutableArray;

@protocol CalLogWriter, OS_dispatch_group, OS_dispatch_queue;

@interface CalLogNode : NSObject

{
    NSMutableArray *_subnodes;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CalLogFilter *_filter;
    id <CalLogWriter> _writer;
    NSMutableArray *_accumulator;
    unsigned long long _accumulatorBufferSize;
}

@property (retain, nonatomic) NSMutableArray *subnodes;
@property (retain, nonatomic) NSMutableArray *accumulator;
@property (retain, nonatomic) CalLogFilter *filter;
@property (nonatomic) unsigned long long accumulatorBufferSize;
@property (retain, nonatomic) id <CalLogWriter> writer;

- (id)init;
- (_Bool)flush;
- (void)addSubnode:(id)arg1;
- (int)minimumLevelOfNodeTree;
- (id)allSubnodes;
- (void)processEnvelope:(id)arg1;
- (void)flushAccumulator;
- (void)clearAccumulator;
- (void)removeSubnode:(id)arg1;

@end
