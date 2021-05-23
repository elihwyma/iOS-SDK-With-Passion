/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsCanKicker : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_targetQueue;
    struct NSString *_name;
    CDUnknownBlockType _block;
    double _time;
    double _leeway;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (void)dealloc;
- (void)cancel;
- (id)initWithName:(struct NSString *)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithName:(struct NSString *)arg1 time:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)kickCanBySameTime;
- (void)kickCanByTime:(double)arg1;
- (id)initWithName:(struct NSString *)arg1 time:(double)arg2 leeway:(double)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)_kickCan;
- (void)kickCanByTime:(double)arg1 leeway:(double)arg2;

@end
