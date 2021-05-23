/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSession;

@interface WFMicrosoftTranslateSessionManager : NSObject

{
    NSURLSession *_session;
    NSString *_apiKey;
    NSURL *_baseURL;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) NSString *apiKey;

- (id)init;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)getAvailableLanguages:(CDUnknownBlockType)arg1;
- (void)detectLanguagesOfStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)translateStrings:(id)arg1 fromLanguage:(id)arg2 intoLanguage:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAccessTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendRequestWithURL:(id)arg1 queryParameters:(id)arg2 requestBody:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
