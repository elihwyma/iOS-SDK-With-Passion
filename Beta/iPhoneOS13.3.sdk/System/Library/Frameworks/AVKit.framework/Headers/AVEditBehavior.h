/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVEditBehaviorContext, NSString;

@protocol AVEditBehaviorDelegate;

@interface AVEditBehavior : NSObject <Swift>

{
    AVEditBehaviorContext *_behaviorContext;
    id <AVEditBehaviorDelegate> _delegate;
}

@property (weak, nonatomic) AVEditBehaviorContext *behaviorContext;
@property (weak, nonatomic) id <AVEditBehaviorDelegate> delegate;
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
