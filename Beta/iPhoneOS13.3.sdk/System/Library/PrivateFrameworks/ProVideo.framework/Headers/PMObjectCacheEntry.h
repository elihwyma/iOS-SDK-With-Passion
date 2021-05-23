/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMObjectCacheEntry : NSObject

{
    NSString *_cacheKey;
    unsigned int _hashValue;
    id _item;
    unsigned long long _size;
    unsigned long long _lastAccess;
    float _freq;
    float _value;
    double _cost;
}

- (void)dealloc;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (double)cost;
- (void)setLastAccess:(unsigned long long)arg1;
- (unsigned long long)lastAccess;
- (unsigned int)hashValue;
- (unsigned long long)getSize;
- (id)initWithKey:(id)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5;
- (void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3;
- (void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3;
- (id)getItem;
- (float)getValue:(unsigned long long)arg1 decayRate:(float)arg2;
- (_Bool)canBePurgedFromCache;

@end
