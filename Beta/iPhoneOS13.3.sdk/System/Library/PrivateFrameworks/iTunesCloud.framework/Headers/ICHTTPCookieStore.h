/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCookieStore;

- (id)init;
- (void)dealloc;
- (void)removeAllCookies;
- (void)removeCookiesWithProperties:(id)arg1;
- (id)getCookie:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3;
- (void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2;
- (id)_cookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)getCookiesForUserIdentifier:(id)arg1;
- (id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)_saveCookies:(id)arg1 userIdentifier:(id)arg2;
- (id)_accountForUserIdentifier:(id)arg1;
- (id)getCookiesForURL:(id)arg1;
- (id)getGlobalAccountCookiesForURL:(id)arg1;
- (void)saveCookies:(id)arg1 forURL:(id)arg2;

@end
