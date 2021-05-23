/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject

{
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSArray *pendingRequests;

+ (void)begin;
+ (void)commit;
+ (void)_commit:(id)arg1;
+ (void)group:(CDUnknownBlockType)arg1;
+ (id)currentTransaction;
+ (void)setCurrentTransaction:(id)arg1;
+ (id)ensureCurrentTransaction;
+ (id)assertCurrentTransaction;
+ (void)commitAndNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)withCurrentTransaction:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)begin;
- (_Bool)commit;
- (void)flush;
- (void)submitRequest:(id)arg1;
- (void)notifyCompletion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)submitPendingRequests;
- (void)resetPendingRequests;

@end
