/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PVEffectRegistryEntry : NSObject

{
    Class _effectClass;
    NSDictionary *_effectProperties;
}

- (oneway void)dealloc;
- (id)effectProperties;
- (id)initWithClass:(Class)arg1 andProperties:(id)arg2;
- (Class)effectClass;

@end
