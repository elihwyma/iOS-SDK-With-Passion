/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString *domain;
@property (retain) NSURL *syncRequestURL;
@property (retain) NSURL *pushKeyValueRequestURL;
@property (retain) NSURL *pullKeyValueRequestURL;
@property (retain) NSURL *pushAllKeyValueRequestURL;
@property (retain) NSURL *pullAllKeyValueRequestURL;
@property _Bool domainDisabled;
@property double pollingIntervalInSeconds;

@end
