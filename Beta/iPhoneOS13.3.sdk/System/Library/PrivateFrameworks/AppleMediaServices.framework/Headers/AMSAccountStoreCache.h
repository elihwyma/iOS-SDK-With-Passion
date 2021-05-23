/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSAccountStoreCache : NSObject

+ (id)cache;
+ (id)cacheAccessQueue;
+ (id)accountStoreForMediaType:(id)arg1;
+ (id)mediaTypeForAccountStore:(id)arg1;
+ (void)_resetAccountStoreCache;

@end
