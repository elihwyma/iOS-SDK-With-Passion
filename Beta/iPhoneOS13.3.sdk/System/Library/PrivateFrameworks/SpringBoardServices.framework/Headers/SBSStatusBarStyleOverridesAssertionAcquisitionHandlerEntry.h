/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionAcquisitionHandlerEntry : NSObject

{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType handler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)initWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
