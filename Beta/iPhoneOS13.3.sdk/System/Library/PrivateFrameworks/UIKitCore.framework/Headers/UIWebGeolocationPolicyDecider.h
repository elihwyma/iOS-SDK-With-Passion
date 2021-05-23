/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface UIWebGeolocationPolicyDecider : NSObject

{
    NSMutableDictionary *_sites;
    NSMutableArray *_challenges;
    NSMapTable *_activeChallenges;
}

+ (void)initialize;
+ (id)sharedPolicyDecider;

- (id)init;
- (void)dealloc;
- (void)clearCache;
- (void)_load;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(_Bool)arg2;
- (id)_siteFile;
- (_Bool)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3;
- (void)_save;
- (long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;
- (void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3;
- (_Bool)_getAuthorizationStatusForToken:(id)arg1 requestingURL:(id)arg2 promptInfo:(id *)arg3;
- (void)_executeNextChallenge;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)clearAllCaches;
- (void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2;
- (_Bool)getAuthorizationStatusForOrigin:(id)arg1 requestingURL:(id)arg2 promptInfo:(id *)arg3;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)didAuthorizeGeolocationForPromptInfo:(id)arg1;
- (void)didDenyGeolocationForPromptInfo:(id)arg1;

@end
