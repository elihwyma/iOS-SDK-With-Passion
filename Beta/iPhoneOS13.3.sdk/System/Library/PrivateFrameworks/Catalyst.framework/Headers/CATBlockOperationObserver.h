/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CATBlockOperationObserver : NSObject

{
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CDUnknownBlockType _didStart;
    CDUnknownBlockType _didProgress;
    CDUnknownBlockType _didFinish;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, nonatomic) CDUnknownBlockType didStart;
@property (copy, nonatomic) CDUnknownBlockType didProgress;
@property (copy, nonatomic) CDUnknownBlockType didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)operationDidFinish:(id)arg1;
- (void)invokeBlock:(CDUnknownBlockType)arg1 operation:(id)arg2;
- (void)operationDidStart:(id)arg1;
- (void)operationDidProgress:(id)arg1;

@end
