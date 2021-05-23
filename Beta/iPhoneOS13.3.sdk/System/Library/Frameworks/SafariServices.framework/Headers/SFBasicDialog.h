/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFDialog.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SFBasicDialog : _SFDialog

{
    _Bool _canceledOnProvisionalNavigation;
    _Bool _canceledOnCommittedNavigation;
    _Bool _canceledOnApplicationBackground;
    _Bool _completionHandlerBlocksWebProcess;
    _Bool _alertControllerPresentsAsActionSheet;
    _Bool _shouldHideWebContent;
    NSArray *_additionalCancellationExemptions;
    long long _presentationStyle;
    NSString *_title;
    NSString *_message;
    NSString *_defaultText;
    NSString *_textPlaceholder;
    NSString *_defaultPassword;
    NSString *_passwordPlaceholder;
    NSArray *_actions;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultText;
@property (copy, nonatomic) NSString *textPlaceholder;
@property (copy, nonatomic) NSString *defaultPassword;
@property (copy, nonatomic) NSString *passwordPlaceholder;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) _Bool alertControllerPresentsAsActionSheet;
@property (nonatomic) _Bool shouldHideWebContent;
@property (nonatomic) _Bool canceledOnProvisionalNavigation;
@property (nonatomic) _Bool canceledOnCommittedNavigation;
@property (nonatomic) _Bool canceledOnApplicationBackground;
@property (copy, nonatomic) NSArray *additionalCancellationExemptions;
@property (nonatomic) _Bool completionHandlerBlocksWebProcess;
@property (nonatomic) long long presentationStyle;

- (id)init;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
