/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchConnection.h>

@class NSString;

@interface CSPrivateSearchConnection : CSSearchConnection

{
    NSString *_token;
}

@property (retain, nonatomic) NSString *token;

+ (id)privateSearchConnectionWithToken:(id)arg1;

- (id)initWithToken:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(_Bool)arg4;

@end
