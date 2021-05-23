/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSString, UIAlertController, UIViewController;

@interface CRKPresentAlertOperation : CATOperation

{
    UIAlertController *mAlertController;
    NSString *_acknowledgeOptionTitle;
    NSString *_message;
    UIViewController *_presentingViewController;
    NSString *_title;
}

@property (nonatomic, readonly) NSString *acknowledgeOptionTitle;
@property (nonatomic, readonly) NSString *message;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) NSString *title;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithPresentingViewController:(id)arg1 title:(id)arg2 message:(id)arg3 acknowledgeOptionTitle:(id)arg4;

@end
