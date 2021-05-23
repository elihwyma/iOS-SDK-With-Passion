/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NUPriority, NURenderContext;

@protocol OS_dispatch_queue;

@interface NURenderClient : NSObject

{
    _Bool _shouldCoalesceUpdates;
    NSString *_name;
    NUPriority *_priority;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NURenderContext *_renderContext;
    CDUnknownBlockType _genericCompletionBlock;
}

@property (copy) NSString *name;
@property (readonly) NSObject<OS_dispatch_queue> *responseQueue;
@property (retain, nonatomic) NURenderContext *renderContext;
@property (copy) CDUnknownBlockType genericCompletionBlock;
@property (nonatomic) _Bool shouldCoalesceUpdates;
@property (retain) NUPriority *priority;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)cancel;
- (id)initWithName:(id)arg1 responseQueue:(id)arg2;
- (void)submitGenericRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitGenericRequest:(id)arg1;

@end
