/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFWebResource.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WFHTMLStringWebResource : WFWebResource

{
    NSString *_htmlString;
    NSURL *_baseURL;
}

@property (nonatomic, readonly) NSString *htmlString;
@property (nonatomic, readonly) NSURL *baseURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)URL;
- (id)MIMEType;
- (id)textEncodingName;
- (id)loadInWKWebView:(id)arg1;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;

@end
