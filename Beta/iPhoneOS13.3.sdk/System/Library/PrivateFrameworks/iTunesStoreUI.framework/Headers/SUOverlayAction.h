/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject

{
    long long _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property (nonatomic) int actionType;
@property (nonatomic) long long animationCount;
@property (retain, nonatomic) UIViewController *otherViewController;
@property (retain, nonatomic) SUOverlayTransition *transition;
@property (retain, nonatomic) UIViewController *viewController;

- (void)dealloc;

@end
