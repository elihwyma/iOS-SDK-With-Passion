/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFWebResource.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface WFURLWebResource : WFWebResource

@property (nonatomic, readonly) NSURL *URL;

- (id)initWithURL:(id)arg1;
- (id)request;
- (id)loadInWKWebView:(id)arg1;

@end
