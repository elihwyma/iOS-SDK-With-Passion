/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, RUIObjectModel, UIAlertController;

@protocol RUIAlertViewDelegate;

@interface RUIAlertView

{
    UIAlertController *_alertController;
    RUIObjectModel<RUIAlertViewDelegate> *_objectModel;
    NSString *_title;
    NSString *_message;
    long long _buttonIndex;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (weak, nonatomic) RUIObjectModel<RUIAlertViewDelegate> *objectModel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (nonatomic, readonly) long long buttonIndex;

+ (void)_enableTestMode;

- (void)dealloc;
- (id)alertController;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)runAlertInController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 style:(long long)arg3 attributes:(id)arg4;

@end
