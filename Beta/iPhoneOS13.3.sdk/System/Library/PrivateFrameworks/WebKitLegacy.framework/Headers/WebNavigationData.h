/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject

{
    WebNavigationDataPrivate *_private;
}

- (void)dealloc;
- (id)url;
- (id)title;
- (id)response;
- (id)originalRequest;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(_Bool)arg5 clientRedirectSource:(id)arg6;
- (_Bool)hasSubstituteData;
- (id)clientRedirectSource;

@end
