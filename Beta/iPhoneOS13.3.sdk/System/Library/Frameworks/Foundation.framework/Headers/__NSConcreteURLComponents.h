/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSURLComponents.h>

#import <Foundation/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSConcreteURLComponents : NSURLComponents <Swift>

{
    struct __CFURLComponents *_components;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)init;
- (id)string;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)user;
- (id)scheme;
- (id)host;
- (id)port;
- (id)password;
- (id)query;
- (id)fragment;
- (id)initWithString:(id)arg1;
- (id)path;
- (void)setPort:(id)arg1;
- (struct __CFURLComponents *)__cfComponents;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
- (id)URL;
- (id)URLRelativeToURL:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setFragment:(id)arg1;
- (id)percentEncodedUser;
- (void)setPercentEncodedUser:(id)arg1;
- (id)percentEncodedPassword;
- (void)setPercentEncodedPassword:(id)arg1;
- (id)percentEncodedHost;
- (void)setPercentEncodedHost:(id)arg1;
- (id)percentEncodedPath;
- (void)setPercentEncodedPath:(id)arg1;
- (id)percentEncodedQuery;
- (void)setPercentEncodedQuery:(id)arg1;
- (id)percentEncodedFragment;
- (void)setPercentEncodedFragment:(id)arg1;
- (struct _NSRange)rangeOfScheme;
- (struct _NSRange)rangeOfUser;
- (struct _NSRange)rangeOfPassword;
- (struct _NSRange)rangeOfHost;
- (struct _NSRange)rangeOfPort;
- (struct _NSRange)rangeOfPath;
- (struct _NSRange)rangeOfQuery;
- (struct _NSRange)rangeOfFragment;
- (id)queryItems;
- (void)setQueryItems:(id)arg1;
- (id)percentEncodedQueryItems;
- (void)setPercentEncodedQueryItems:(id)arg1;

@end
