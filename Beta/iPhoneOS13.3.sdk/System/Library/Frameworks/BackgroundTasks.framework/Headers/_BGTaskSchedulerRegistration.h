/*
 Image: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _BGTaskSchedulerRegistration : NSObject

{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _launchHandler;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType launchHandler;

- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 launchHandler:(CDUnknownBlockType)arg3;

@end
