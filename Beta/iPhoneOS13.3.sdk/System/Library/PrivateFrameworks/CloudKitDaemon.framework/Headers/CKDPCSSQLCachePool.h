/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDPCSSQLCachePool : NSObject

{
    NSMutableDictionary *_cachesByPath;
    NSMutableDictionary *_checkoutsByPath;
}

@property (retain, nonatomic) NSMutableDictionary *cachesByPath;
@property (retain, nonatomic) NSMutableDictionary *checkoutsByPath;

+ (id)sharedPool;

- (id)_init;
- (id)cacheForContext:(id)arg1;
- (void)releaseCache:(id)arg1 forContext:(id)arg2;

@end
