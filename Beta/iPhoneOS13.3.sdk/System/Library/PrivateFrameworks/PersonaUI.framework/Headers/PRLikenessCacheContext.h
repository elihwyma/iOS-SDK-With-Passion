/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <Foundation/NSObject.h>

@interface PRLikenessCacheContext : NSObject

{
    _Bool _circular;
    _Bool _forceDecode;
    unsigned long long _cacheSize;
    double _scale;
}

@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) _Bool circular;
@property (nonatomic) double scale;
@property (nonatomic) _Bool forceDecode;

+ (id)contextWithCacheSize:(unsigned long long)arg1;

- (id)init;

@end
