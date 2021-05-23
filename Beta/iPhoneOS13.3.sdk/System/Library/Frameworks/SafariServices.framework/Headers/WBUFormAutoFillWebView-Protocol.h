/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@class NSString, UIViewController;

@protocol WBUFormAutoFillWebView <Swift>

@property (nonatomic, readonly) UIViewController *webui_presentingViewController;
@property (nonatomic, readonly) _Bool webui_privateBrowsingEnabled;
@property (copy, nonatomic, setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;

- (unsigned short)webui_preventNavigationDuringAutoFillPrompt;
- (unsigned short)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)webui_setFormMetadata:forLastPasswordGenerationOrSubmitEventInFrame: /* Error: Ran out of types for this method. */;

@end
