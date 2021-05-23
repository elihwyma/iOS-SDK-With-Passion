/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <Swift>

{
    _Bool _animated;
    _Bool _interactive;
    _Bool _cancelled;
    double _transitionDuration;
    double _percentComplete;
    double _completionVelocity;
    long long _completionCurve;
    long long _toOrientation;
    long long _fromOrientation;
    struct CGAffineTransform _targetTransform;
}

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (nonatomic, getter=isInteractive) _Bool interactive;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double percentComplete;
@property (nonatomic) double completionVelocity;
@property (nonatomic) long long completionCurve;
@property (nonatomic) struct CGAffineTransform targetTransform;
@property (nonatomic) long long toOrientation;
@property (nonatomic) long long fromOrientation;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionForTransitionCoordinatorContext:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
