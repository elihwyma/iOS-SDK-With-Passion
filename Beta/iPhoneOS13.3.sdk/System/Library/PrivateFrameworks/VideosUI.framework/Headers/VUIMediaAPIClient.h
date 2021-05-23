/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class AMSMediaTokenService, AMSURLSession, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaAPIClient : NSObject

{
    AMSURLSession *_session;
    AMSMediaTokenService *_tokenService;
    NSString *_clientIdentifier;
}

@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) AMSMediaTokenService *tokenService;
@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)sharedInstance;
+ (id)initializeWithClientIdentifier:(id)arg1;

- (id)_createSession;
- (id)initWithClientIdentifier:(id)arg1;
- (id)_createTokenServiceWithSession:(id)arg1;
- (void)fetchContentForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
