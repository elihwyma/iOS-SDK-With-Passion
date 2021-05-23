/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, WKWebView;

__attribute__((visibility("hidden")))
@interface LPMetadataProviderSpecializationContext : NSObject

{
    _Bool _hasLoadedResource;
    NSURL *_URL;
    NSString *_MIMEType;
    WKWebView *_webView;
    unsigned long long _allowedSpecializations;
}

@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) _Bool hasLoadedResource;
@property (retain, nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) unsigned long long allowedSpecializations;

- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(_Bool)arg4 allowedSpecializations:(unsigned long long)arg5;

@end
