/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVZoomingBehaviorContext, NSString;

__attribute__((visibility("hidden")))
@interface AVZoomingBehavior : NSObject <Swift>

{
    AVZoomingBehaviorContext *_behaviorContext;
}

@property (weak, nonatomic) AVZoomingBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void)willMoveToContext:(id)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;

@end
