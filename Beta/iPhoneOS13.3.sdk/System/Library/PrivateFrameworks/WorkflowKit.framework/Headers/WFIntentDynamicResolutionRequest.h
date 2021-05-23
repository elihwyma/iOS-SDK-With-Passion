/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFIntentDynamicResolutionRequest : NSObject

{
    _Bool _cancelled;
    CDUnknownBlockType _resolutionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType resolutionBlock;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;

- (id)init;
- (void)cancel;

@end
