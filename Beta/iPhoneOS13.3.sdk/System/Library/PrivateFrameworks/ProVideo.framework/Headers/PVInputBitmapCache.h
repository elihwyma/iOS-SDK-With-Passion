/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject

{
    NSMutableDictionary *_cache;
    unsigned long long _countLimit;
}

- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)purge:(_Bool)arg1;
- (void)didRecieveMemoryWarning:(id)arg1;

@end
