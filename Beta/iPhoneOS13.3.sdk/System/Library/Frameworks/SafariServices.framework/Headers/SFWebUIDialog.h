/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFDialog.h>

@class WebUIAlert;

__attribute__((visibility("hidden")))
@interface SFWebUIDialog : _SFDialog

{
    int _finalAction;
    CDUnknownBlockType _completionHandler;
    _Bool _shouldIgnoreGlobalModalUIDisplayPolicy;
    WebUIAlert *_alert;
}

@property (nonatomic, readonly) WebUIAlert *alert;

- (long long)presentationStyle;
- (void)didCompleteWithResponse:(id)arg1;
- (id)initWithAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldIgnoreGlobalModalUIDisplayPolicy;

@end
