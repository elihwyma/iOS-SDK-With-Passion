/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject

{
    SUScriptObjectInvocationBatch *_invocationBatch;
    id _target;
}

@property SUScriptObjectInvocationBatch *invocationBatch;
@property id target;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
