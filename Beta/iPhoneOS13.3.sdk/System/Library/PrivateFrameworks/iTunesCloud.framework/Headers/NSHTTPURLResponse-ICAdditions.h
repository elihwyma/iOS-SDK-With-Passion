/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ICAdditions)

- (_Bool)hasCacheControl;
- (id)ic_valueForHTTPHeaderField:(id)arg1;
- (id)_cacheControlParameters;
- (double)cacheControlMaxAge;

@end
