/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ISAdditions)

- (id)expirationDate;
- (double)expirationInterval;
- (_Bool)_getCacheControlMaxAge:(double *)arg1;
- (long long)maxExpectedContentLength;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (id)_dateFromExpires;

@end
