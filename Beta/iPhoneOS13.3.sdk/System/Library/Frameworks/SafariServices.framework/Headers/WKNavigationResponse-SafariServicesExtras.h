/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebKit/WKNavigationResponse.h>

@class NSString;

@interface WKNavigationResponse (SafariServicesExtras)

@property (nonatomic, readonly) NSString *_sf_suggestedFilename;

- (_Bool)_sf_allowReloadingInMainFrame;
- (long long)_sf_responsePolicy:(long long *)arg1 uti:(id *)arg2;

@end
