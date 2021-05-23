/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface WFAccountCache : NSObject

{
    NSCache *_cache;
}

@property (nonatomic, readonly) NSCache *cache;

- (id)init;
- (id)accountsForService:(id)arg1;
- (id)numberOfAccountsForService:(id)arg1;
- (void)setNumberOfAccounts:(id)arg1 forService:(id)arg2;
- (void)setAccounts:(id)arg1 forService:(id)arg2;
- (void)clearCacheForService:(id)arg1;

@end
