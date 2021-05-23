/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFCloudKitTask : NSObject

{
    _Bool _cancelled;
    CDUnknownBlockType _cancellationHandler;
}

@property (getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;

- (void)cancel;

@end
