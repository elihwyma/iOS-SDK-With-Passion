/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSHTTPCookieInternal, NSString, NSURL;

@interface NSHTTPCookie : NSObject

{
    NSHTTPCookieInternal *_cookiePrivate;
}

@property (readonly) struct HTTPCookie *_inner;
@property (copy, readonly) NSDictionary *properties;
@property (readonly) unsigned long long version;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *value;
@property (copy, readonly) NSDate *expiresDate;
@property (readonly, getter=isSessionOnly) _Bool sessionOnly;
@property (copy, readonly) NSString *domain;
@property (copy, readonly) NSString *path;
@property (readonly, getter=isSecure) _Bool secure;
@property (readonly, getter=isHTTPOnly) _Bool HTTPOnly;
@property (copy, readonly) NSString *comment;
@property (copy, readonly) NSURL *commentURL;
@property (copy, readonly) NSArray *portList;
@property (copy, readonly) NSString *sameSitePolicy;

+ (id)cookieWithProperties:(id)arg1;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)cookieWithCFHTTPCookie:(id)arg1;
+ (id)_cf2nsCookies:(struct __CFArray *)arg1;
+ (const struct __CFArray *)_ns2cfCookies:(id)arg1;
+ (id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(_Bool)arg3;
+ (id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)_initWithInternal:(id)arg1;
- (id)_initWithProperties:(id)arg1 fromString:(_Bool)arg2;
- (id)_initWithCookie:(id)arg1 partition:(id)arg2;
- (id)_initWithHeader:(const struct CompactCookieHeader *)arg1;
- (id)_initWithReference:(const struct CompactCookieArray *)arg1 index:(long long)arg2;
- (id)ensureCookieValid;
- (id)initWithCFHTTPCookie:(id)arg1;
- (id)_GetInternalCFHTTPCookie;
- (id)_CFHTTPCookie;
- (id)_storagePartition;
- (id)Name;
- (id)Value;
- (id)Domain;
- (id)Path;
- (id)Expires;
- (id)Comment;
- (id)CommentURL;
- (id)StoragePartition;
- (id)SameSitePolicy;
- (id)OriginURL;
- (id)Version;
- (id)Secure;
- (id)Discard;
- (id)Port;
- (id)MaxAge;
- (long long)_compareForHeaderOrder:(id)arg1;
- (_Bool)_isExpired;

@end
