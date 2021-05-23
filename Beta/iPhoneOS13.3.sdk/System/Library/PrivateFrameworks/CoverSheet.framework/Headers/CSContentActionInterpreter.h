/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface CSContentActionInterpreter : NSObject

{
    UIViewController *_nowPlayingViewController;
}

@property (weak, nonatomic) UIViewController *nowPlayingViewController;

- (void)_viewControllerFromAction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
