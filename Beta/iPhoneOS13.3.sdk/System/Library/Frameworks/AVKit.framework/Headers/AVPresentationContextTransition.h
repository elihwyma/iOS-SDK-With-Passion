/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPresentationContextTransition : NSObject

{
    _Bool _wasInitiallyInteractive;
    _Bool _hasAVKitAnimator;
    _Bool _wasCancelledWithInactiveScene;
    unsigned long long _presenterSupportedOrientations;
    long long _initialInterfaceOrientation;
    long long _finalInterfaceOrientation;
}

@property (nonatomic) _Bool wasInitiallyInteractive;
@property (nonatomic) _Bool hasAVKitAnimator;
@property (nonatomic) _Bool wasCancelledWithInactiveScene;
@property (nonatomic) unsigned long long presenterSupportedOrientations;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) long long finalInterfaceOrientation;
@property (nonatomic, readonly) _Bool isRotated;
@property (nonatomic, readonly) long long interfaceRotation;
@property (nonatomic, readonly) struct CGAffineTransform rotationTransform;
@property (nonatomic, readonly) struct CGAffineTransform counterRotationTransform;

- (_Bool)presenterSupportsOrientation:(long long)arg1;

@end
