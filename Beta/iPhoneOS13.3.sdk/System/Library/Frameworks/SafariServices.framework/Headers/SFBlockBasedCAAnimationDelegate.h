/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFBlockBasedCAAnimationDelegate : NSObject

{
    CDUnknownBlockType _animationDidStopBlock;
}

@property (copy, nonatomic) CDUnknownBlockType animationDidStopBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animationDelegateWithDidStopBlock:(CDUnknownBlockType)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)associateLifetimeWithAnimation:(id)arg1;

@end
