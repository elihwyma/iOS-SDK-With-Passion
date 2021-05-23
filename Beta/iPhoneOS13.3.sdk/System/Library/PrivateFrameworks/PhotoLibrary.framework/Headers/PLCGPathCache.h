/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@interface PLCGPathCache : NSObject

{
    struct __CFDictionary *_pathCache;
}

+ (id)sharedPathCache;

- (id)init;
- (void)dealloc;
- (void)setPath:(struct CGPath *)arg1 forKey:(struct CGRect)arg2;
- (struct CGPath *)pathForKey:(struct CGRect)arg1;

@end
