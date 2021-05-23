/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSItemProvider, NSString, UIImage, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCuratedViewModel : VSViewModel

{
    _Bool _beginValidationButtonEnabled;
    _Bool _showFooter;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    NSString *_beginValidationButtonTitle;
    VSOptional *_identityProviderDisplayName;
    NSString *_message;
    NSString *_notice;
    NSString *_footerText;
}

@property (nonatomic, getter=isBeginValidationButtonEnabled) _Bool beginValidationButtonEnabled;
@property (copy, nonatomic) NSString *beginValidationButtonTitle;
@property (retain, nonatomic) VSOptional *identityProviderDisplayName;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *notice;
@property (nonatomic) _Bool showFooter;
@property (copy, nonatomic) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSItemProvider *logoProvider;
@property (retain, nonatomic) UIImage *logo;
@property (copy, nonatomic) NSString *logoAccessibilityLabel;

- (id)init;
- (void)configureWithRequest:(id)arg1;

@end
