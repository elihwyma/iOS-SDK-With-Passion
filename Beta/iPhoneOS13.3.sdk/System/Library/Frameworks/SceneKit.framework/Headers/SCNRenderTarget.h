/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class CIImage, MISSING_TYPE, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCNRenderTarget : NSObject

{
    CDStruct_ace98575 _description;
    MISSING_TYPE *_size;
    unsigned long long _arrayLength;
    CIImage *_ciImage;
    NSArray *_sliceTextures;
    id _texture;
    NSString *_name;
    long long _referenceCount;
    long long _timeStamp;
}

@property (retain, nonatomic) id texture;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long referenceCount;
@property (nonatomic) long long timeStamp;
@property (nonatomic, readonly) _Bool viewportDependant;
@property (nonatomic, readonly) unsigned char renderBufferFormat;

- (void)dealloc;
- (id)description;
- (id)ciImage;
- (id)initWithDescription:(CDStruct_ace98575 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (_Bool)matchesDescription:(CDStruct_ace98575 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (id)textureForSliceIndex:(unsigned long long)arg1;

@end
