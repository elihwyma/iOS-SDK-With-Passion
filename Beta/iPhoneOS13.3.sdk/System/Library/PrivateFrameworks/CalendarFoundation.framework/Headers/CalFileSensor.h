/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalFileSensor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _eventBlock;
    _Bool _started;
    NSString *_path;
}

@property (retain, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) _Bool started;
@property (copy, nonatomic, readonly) CDUnknownBlockType eventBlock;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)stop;
- (void)start;
- (id)initWithPath:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;

@end
