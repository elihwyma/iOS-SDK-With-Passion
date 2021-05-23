/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIClassSwapper, UIStoryboardSegueTemplate, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardDecodingContext : NSObject

{
    UIStoryboardSegueTemplate *_sourceSegueTemplate;
    id _sender;
    UIClassSwapper *_classSwapperTemplate;
    UIViewController *_parentViewController;
    long long _childViewControllerIndex;
    CDUnknownBlockType _creator;
}

@property (retain, nonatomic) UIClassSwapper *classSwapperTemplate;
@property (retain, nonatomic) UIStoryboardSegueTemplate *sourceSegueTemplate;
@property (retain, nonatomic) UIViewController *parentViewController;
@property (nonatomic) long long childViewControllerIndex;
@property (retain, nonatomic) id sender;
@property (copy, nonatomic) CDUnknownBlockType creator;

@end
