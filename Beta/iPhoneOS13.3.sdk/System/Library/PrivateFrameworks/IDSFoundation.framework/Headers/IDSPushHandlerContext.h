/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol OS_dispatch_queue;

@interface IDSPushHandlerContext : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_topics;
    NSSet *_commands;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSSet *topics;
@property (copy, nonatomic) NSSet *commands;

- (id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3;

@end
