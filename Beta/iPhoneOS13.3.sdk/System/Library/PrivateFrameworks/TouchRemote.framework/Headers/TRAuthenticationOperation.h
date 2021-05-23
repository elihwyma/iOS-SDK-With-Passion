/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation

{
    _Bool _shouldIgnoreAuthFailures;
    _Bool _shouldForceInteractiveAuth;
    NSSet *_targetedServices;
    UIViewController *_presentingViewController;
}

@property (retain, nonatomic) NSSet *targetedServices;
@property (nonatomic) _Bool shouldIgnoreAuthFailures;
@property (nonatomic) _Bool shouldForceInteractiveAuth;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (void)execute;

@end
