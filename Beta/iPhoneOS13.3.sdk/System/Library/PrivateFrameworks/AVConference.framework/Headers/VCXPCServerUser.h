/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCServerUser : NSObject

{
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    int _eventLogLevel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) int eventLogLevel;

- (id)init;
- (void)dealloc;

@end
