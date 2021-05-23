/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class MSMessagesAppViewController, UIViewController;

@protocol AVTUIControllerPresentationDelegate;

@interface AVTUIControllerPresentation : NSObject

{
    UIViewController *_controller;
    MSMessagesAppViewController *_modalMessagesController;
    id <AVTUIControllerPresentationDelegate> _delegate;
}

@property (nonatomic, readonly) UIViewController *controller;
@property (weak, nonatomic) MSMessagesAppViewController *modalMessagesController;
@property (weak, nonatomic) id <AVTUIControllerPresentationDelegate> delegate;

+ (id)presentationWithWrappingForController:(id)arg1;
+ (void)setPendingGlobalPresentation:(id)arg1;
+ (id)pendingGlobalPresentation;

- (id)initWithController:(id)arg1;
- (void)viewWillBeObstructed;

@end
