/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject

{
    NSHTTPCookieStorageInternal *_internal;
    _Bool __overrideSessionCookieAcceptPolicy;
}

@property (nonatomic) _Bool _overrideSessionCookieAcceptPolicy;
@property (copy, readonly) NSArray *cookies;
@property unsigned long long cookieAcceptPolicy;

+ (id)sharedHTTPCookieStorage;
+ (id)_groupContainerCookieStorages;
+ (void)_setSharedHTTPCookieStorage:(id)arg1;
+ (id)sharedCookieStorageForGroupContainerIdentifier:(id)arg1;
+ (id)_csff:(id)arg1;
+ (id)_csfi:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)cookiesForURL:(id)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;
- (void)_saveCookies;
- (void)deleteCookie:(id)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;
- (void)setCookie:(id)arg1;
- (void)removeCookiesSinceDate:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;
- (void)_saveCookies:(CDUnknownBlockType)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_CFHTTPCookieStorage;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;
- (id)sortedCookiesUsingDescriptors:(id)arg1;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_getCookieStoragePartitionsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_testingOfStoringOfCookie:(id)arg1;

@end
