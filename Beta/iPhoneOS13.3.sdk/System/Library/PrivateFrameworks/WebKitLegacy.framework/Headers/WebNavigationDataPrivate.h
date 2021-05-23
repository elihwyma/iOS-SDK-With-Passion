/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface WebNavigationDataPrivate : NSObject

{
    NSString *url;
    NSString *title;
    NSURLRequest *originalRequest;
    NSURLResponse *response;
    _Bool hasSubstituteData;
    NSString *clientRedirectSource;
}

- (void)dealloc;

@end
