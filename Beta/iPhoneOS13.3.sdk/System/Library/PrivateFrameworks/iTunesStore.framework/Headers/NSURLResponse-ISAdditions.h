/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSURLResponse.h>

@interface NSURLResponse (ISAdditions)

- (int)statusCode;
- (id)allHeaderFields;
- (long long)maxExpectedContentLength;

@end
