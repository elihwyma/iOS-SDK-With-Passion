/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTMaterial, AVTMemoji, NSArray;

@interface AVTComponent : NSObject

{
    long long _type;
    NSArray *_assets;
    _Bool _mirrored;
    AVTMemoji *_memoji;
    AVTMaterial *_materials[3];
    double _intensity;
}

@property (readonly) NSArray *assets;
@property (readonly) long long type;
@property (nonatomic) double intensity;
@property (nonatomic) _Bool mirrored;

+ (_Bool)componentTypeSupportsIntensity:(long long)arg1;
+ (id)componentWithAssets:(id)arg1;

- (id)description;
- (id)initWithAssets:(id)arg1;
- (id)memoji;
- (void)setMemoji:(id)arg1;
- (id)materialAtIndex:(unsigned long long)arg1;
- (void)_encode:(id)arg1;
- (_Bool)_decode:(id)arg1;
- (void)setMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newComponentInstance;

@end
