/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject

{
    NSString *_name;
    int _transition;
    CDUnknownBlockType _completion;
    double _curlUpRevealedHeight;
    UIViewController *_viewController;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool animated;
@property (nonatomic) int transition;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, setter=_setCurlUpRevealedHeight:) double _curlUpRevealedHeight;

- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;

@end
