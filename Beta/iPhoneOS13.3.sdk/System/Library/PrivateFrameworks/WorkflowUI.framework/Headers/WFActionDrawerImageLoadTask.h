/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFActionDrawerImageLoadTask : NSObject

{
    _Bool _canceled;
}

@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;

- (void)cancel;

@end
