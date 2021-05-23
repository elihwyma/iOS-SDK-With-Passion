/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface ICURLResponseAuthenticationProvider : NSObject <Swift>

{
    long long _interactionLevel;
}

@property (nonatomic, readonly) long long interactionLevel;

+ (_Bool)supportsSecureCoding;
+ (id)defaultProvider;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserInteractionLevel:(long long)arg1;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
