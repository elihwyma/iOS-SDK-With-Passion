/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@class NSArray, NSString, NSURL, VSCredentialEntryPicker, VSExpressionEvaluator;

@protocol VSCredentialEntryViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewModel : VSCuratedViewModel

{
    NSArray *_credentialEntryFields;
    VSCredentialEntryPicker *_picker;
    NSURL *_linkURL;
    NSString *_linkTitle;
    NSArray *_buttons;
    NSString *_recentsTitle;
    NSString *_recentsMessage;
    NSString *_additionalMessage;
    id <VSCredentialEntryViewModelDelegate> _delegate;
    VSExpressionEvaluator *_buttonExpressionEvaluator;
}

@property (retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (retain, nonatomic) NSArray *credentialEntryFields;
@property (retain, nonatomic) VSCredentialEntryPicker *picker;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSString *recentsTitle;
@property (copy, nonatomic) NSString *recentsMessage;
@property (copy, nonatomic) NSString *additionalMessage;
@property (weak, nonatomic) id <VSCredentialEntryViewModelDelegate> delegate;

- (void)configureWithRequest:(id)arg1;
- (void)_bindField:(id)arg1;
- (void)_unbindField:(id)arg1;
- (void)validateCredentialEntryFields;
- (void)buttonTappedAtIndex:(unsigned long long)arg1;
- (void)pickerDidSelectRow:(unsigned long long)arg1;
- (void)clearFieldsAfterUsername;

@end
