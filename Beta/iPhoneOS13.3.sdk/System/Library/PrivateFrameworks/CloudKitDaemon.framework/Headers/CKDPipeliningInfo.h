/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol CKDOperationPipelining, CKDURLRequestPipelining, OS_dispatch_group, OS_dispatch_queue;

@interface CKDPipeliningInfo : NSObject

{
    _Bool _isCancelled;
    id <CKDURLRequestPipelining> _request;
    id <CKDOperationPipelining> _operation;
    NSObject<OS_dispatch_group> *_perRequestCallbackGroup;
    NSObject<OS_dispatch_group> *_perRequestGroup;
    NSObject<OS_dispatch_queue> *_perRequestCallbackQueue;
    NSMutableArray *_perRequestCallbackBlocks;
}

@property (retain, nonatomic) NSMutableArray *perRequestCallbackBlocks;
@property (nonatomic) _Bool isCancelled;
@property (retain, nonatomic) id <CKDURLRequestPipelining> request;
@property (weak, nonatomic) id <CKDOperationPipelining> operation;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue;

- (id)initWithRequest:(id)arg1 operation:(id)arg2;
- (void)addPerRequestCallbackBlock:(CDUnknownBlockType)arg1;
- (void)disablePerRequestCallbackBlocks;
- (void)cancelAndDisablePerRequestCallbackBlocks;

@end
