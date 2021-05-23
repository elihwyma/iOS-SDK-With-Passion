/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface _CRKCardViewControllerTransitionCoordinator : NSObject

{
    _Bool _animated;
    CDUnknownBlockType _initialSetup;
    CDUnknownBlockType _finalSetup;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    UIView *_containerView;
    double _duration;
}

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType initialSetup;
@property (copy, nonatomic) CDUnknownBlockType finalSetup;
@property (copy, nonatomic) CDUnknownBlockType animations;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) double duration;

- (id)init;

@end
