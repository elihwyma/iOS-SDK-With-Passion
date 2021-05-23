/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFWebResource.h>

@class WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFFileWebResource : WFWebResource

{
    WFFileRepresentation *_file;
}

@property (nonatomic, readonly) WFFileRepresentation *file;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)MIMEType;
- (id)initWithFile:(id)arg1;
- (id)loadInWKWebView:(id)arg1;

@end
