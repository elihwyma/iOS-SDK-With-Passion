/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface _SBModalViewControllerStackTransition : NSObject

{
    UIViewController *_viewController;
    unsigned long long _operation;
    _Bool _animated;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) unsigned long long operation;
@property (nonatomic) _Bool animated;
@property (copy, nonatomic) CDUnknownBlockType completion;

+ (id)transitionForViewController:(id)arg1 operation:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

- (id)description;
- (void)invokeCompletionIfNecessaryWithResult:(_Bool)arg1;

@end
