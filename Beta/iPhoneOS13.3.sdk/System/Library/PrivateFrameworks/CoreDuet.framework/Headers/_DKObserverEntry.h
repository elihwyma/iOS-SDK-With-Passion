/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _DKObserverEntry : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_call;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject *call;

@end
