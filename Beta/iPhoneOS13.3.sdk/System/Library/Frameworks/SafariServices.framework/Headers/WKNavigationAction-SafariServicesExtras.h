/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebKit/WKNavigationAction.h>

@interface WKNavigationAction (SafariServicesExtras)

@property (nonatomic, readonly) _Bool _sf_shouldAskAboutInsecureFormSubmission;
@property (nonatomic, readonly) _Bool _sf_shouldPerformDownload;

@end
