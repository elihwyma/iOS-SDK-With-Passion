/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRemoteRequestOperation.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICClientInfo, NSString;

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <Swift>

{
    ICClientInfo *_clientInfo;
    NSString *_developerToken;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(unsigned long long)arg3;
- (void)_executeByPerformingStoreRequestWithContext:(id)arg1;

@end
