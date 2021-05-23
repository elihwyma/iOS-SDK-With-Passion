/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <QuartzCore/CABasicAnimation.h>

@class NSString;

@interface NUBasicAnimation : CABasicAnimation

{
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animationWithKeyPath:(id)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end
