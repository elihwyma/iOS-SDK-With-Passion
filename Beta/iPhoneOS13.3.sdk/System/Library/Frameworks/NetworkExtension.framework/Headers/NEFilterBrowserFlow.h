/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterFlow.h>

@class NSURL, NSURLRequest, NSURLResponse;

@interface NEFilterBrowserFlow : NEFilterFlow

{
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSURL *_parentURL;
}

@property (retain) NSURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSURL *parentURL;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 parentURL:(id)arg2 sourceAppIdentifier:(id)arg3;

@end
