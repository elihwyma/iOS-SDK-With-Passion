/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRemoteRequestOperation.h>

#import <iTunesCloud/Swift-Protocol.h>

@class AMSMediaTokenService, ICClientInfo;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <Swift>

{
    ICClientInfo *_clientInfo;
    AMSMediaTokenService *_mediaTokenService;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithClientInfo:(id)arg1;
- (void)_didFetchMediaToken:(id)arg1 withError:(id)arg2;

@end
