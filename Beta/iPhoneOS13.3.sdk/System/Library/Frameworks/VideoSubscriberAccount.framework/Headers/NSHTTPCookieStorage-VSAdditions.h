/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (VSAdditions)

+ (id)vs_sharedCookieStorage;

- (void)vs_saveCookies;

@end
