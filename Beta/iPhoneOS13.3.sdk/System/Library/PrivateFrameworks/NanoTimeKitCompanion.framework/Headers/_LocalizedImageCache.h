/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _LocalizedImageCache : NSObject

{
    NSMutableDictionary *_cache;
}

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)_localeChanged;

@end
