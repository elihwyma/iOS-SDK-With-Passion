/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface NSURLComponents : NSObject <Swift>

@property (copy, readonly) NSURL *URL;
@property (copy, readonly) NSString *string;
@property (copy) NSString *scheme;
@property (copy) NSString *user;
@property (copy) NSString *password;
@property (copy) NSString *host;
@property (copy) NSNumber *port;
@property (copy) NSString *path;
@property (copy) NSString *query;
@property (copy) NSString *fragment;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSString *percentEncodedFragment;
@property (readonly) struct _NSRange rangeOfScheme;
@property (readonly) struct _NSRange rangeOfUser;
@property (readonly) struct _NSRange rangeOfPassword;
@property (readonly) struct _NSRange rangeOfHost;
@property (readonly) struct _NSRange rangeOfPort;
@property (readonly) struct _NSRange rangeOfPath;
@property (readonly) struct _NSRange rangeOfQuery;
@property (readonly) struct _NSRange rangeOfFragment;
@property (copy) NSArray *queryItems;
@property (copy) NSArray *percentEncodedQueryItems;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
+ (id)componentsWithString:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
- (id)URLRelativeToURL:(id)arg1;

@end
