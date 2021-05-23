/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol OS_dispatch_queue;

@interface PKIconImageCache : NSObject

{
    NSObject<OS_dispatch_queue> *_cacheAccessQueue;
    NSDictionary *_iconCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (retain, nonatomic) NSDictionary *iconCache;

+ (id)settingsIconCache;
+ (id)settingsIconCacheWithScale:(double)arg1;

- (id)imageForKey:(id)arg1;
- (id)initWithPath:(id)arg1 scale:(double)arg2;
- (id)allImageIconKeys;

@end
