/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSItemProvider, NSString, NSURL, UIImage, VSMessageQueue;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeViewModel : VSViewModel

{
    _Bool _shouldShowRegenerateCodeButton;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    NSString *_webPagePreamble;
    NSURL *_webPageURL;
    NSString *_webPagePostamble;
    NSString *_onscreenCode;
    NSString *_regenerateCodeButtonTitle;
    VSMessageQueue *_regenerateCodeEventQueue;
    NSString *_footerText;
}

@property (copy, nonatomic) NSString *webPagePreamble;
@property (copy, nonatomic) NSURL *webPageURL;
@property (copy, nonatomic) NSString *webPagePostamble;
@property (copy, nonatomic) NSString *onscreenCode;
@property (nonatomic) _Bool shouldShowRegenerateCodeButton;
@property (copy, nonatomic) NSString *regenerateCodeButtonTitle;
@property (retain, nonatomic) VSMessageQueue *regenerateCodeEventQueue;
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
