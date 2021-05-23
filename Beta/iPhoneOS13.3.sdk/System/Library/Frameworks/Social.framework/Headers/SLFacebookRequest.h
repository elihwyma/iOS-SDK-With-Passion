/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString *accessToken;
@property int responseDataFormat;

- (id)preparedURLRequest;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;
- (void)preflightRequest;

@end
