/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class PKRenderLoop;

@interface PKDisplayLinkTargetProxy : NSObject

{
    PKRenderLoop *_target;
}

- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)drawWithDisplayLink:(id)arg1;

@end
