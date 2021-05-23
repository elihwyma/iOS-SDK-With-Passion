/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFDialog.h>

@class NSArray, NSString, _SFDialogView;

__attribute__((visibility("hidden")))
@interface SFAuthenticatorDialog : _SFDialog

{
    _SFDialogView *_dialogView;
    NSString *_relyingPartyID;
    NSString *_title;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    NSArray *_actions;
}

@property (retain, nonatomic) NSString *relyingPartyID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSArray *actions;

- (long long)presentationStyle;
- (void)transitionToState:(int)arg1;
- (void)didCompleteWithResponse:(id)arg1;
- (id)initWithRelyingPartyID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newDialogViewRepresentation;
- (void)_shake;

@end
