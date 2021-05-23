/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKHTTPCookieStore : NSObject

{
    struct ObjectStorage<API::HTTPCookieStore> _cookieStore;
    struct HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>, WTF::PtrHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>>> _observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (void)getAllCookies:(CDUnknownBlockType)arg1;
- (void)setCookie:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteCookie:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
