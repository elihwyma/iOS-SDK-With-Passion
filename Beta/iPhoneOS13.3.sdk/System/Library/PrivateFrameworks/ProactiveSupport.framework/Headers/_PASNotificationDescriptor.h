/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _PASNotificationDescriptor : NSObject

{
    _Atomic _Bool isCanceled;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    CDUnknownBlockType _handler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) CDUnknownBlockType handler;

@end
