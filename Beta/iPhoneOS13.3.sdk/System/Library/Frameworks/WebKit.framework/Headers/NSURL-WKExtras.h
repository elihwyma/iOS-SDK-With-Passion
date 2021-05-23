/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (WKExtras)

+ (id)_web_URLWithWTFString:(const struct String *)arg1;
+ (id)_web_URLWithWTFString:(const struct String *)arg1 relativeToURL:(id)arg2;
+ (_Bool)_web_canPerformAuthorizationWithURL:(id)arg1;
+ (_Bool)_web_willPerformSOKerberosAuthorizationWithURL:(id)arg1;

- (struct String)_web_originalDataAsWTFString;

@end
