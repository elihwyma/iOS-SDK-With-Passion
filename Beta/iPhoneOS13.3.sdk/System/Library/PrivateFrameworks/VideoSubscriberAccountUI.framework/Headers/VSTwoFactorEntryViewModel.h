/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@class NSArray, NSString, VSExpressionEvaluator, VSTwoFactorEntryTextField;

@protocol VSTwoFactorEntryViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryViewModel : VSCuratedViewModel

{
    id <VSTwoFactorEntryViewModelDelegate> _delegate;
    VSTwoFactorEntryTextField *_twoFactorTextField;
    NSString *_headerText;
    NSArray *_buttons;
    NSString *_originalTwoFacorCode;
    VSExpressionEvaluator *_buttonExpressionEvaluator;
}

@property (copy, nonatomic) NSString *originalTwoFacorCode;
@property (retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (weak, nonatomic) id <VSTwoFactorEntryViewModelDelegate> delegate;
@property (retain, nonatomic) VSTwoFactorEntryTextField *twoFactorTextField;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSArray *buttons;

- (id)init;
- (void)configureWithRequest:(id)arg1;
- (void)buttonAtIndexWasPressed:(unsigned long long)arg1;

@end
