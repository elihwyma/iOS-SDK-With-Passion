/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/Swift-Protocol.h>

@class UIView;

@protocol CRKAnimationCoordinating <Swift>

@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly) UIView *containerView;
@property (copy, nonatomic) CDUnknownBlockType initialSetup;
@property (copy, nonatomic) CDUnknownBlockType finalSetup;
@property (copy, nonatomic) CDUnknownBlockType animations;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) double duration;

@end
