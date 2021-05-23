/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage

{
    NSString *_requestMethod;
    NSURL *_requestURL;
}

@property (copy, nonatomic) NSString *requestMethod;
@property (copy, nonatomic) NSURL *requestURL;

- (void)dealloc;
- (id)responseWithStatus:(int)arg1;
- (id)initWithRequest:(struct __CFHTTPMessage *)arg1;
- (struct __CFHTTPMessage *)copyMessage;
- (_Bool)responseCanUseGZip;

@end
