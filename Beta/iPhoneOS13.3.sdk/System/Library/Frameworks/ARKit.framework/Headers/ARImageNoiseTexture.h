/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLTexture, OS_dispatch_queue;

@interface ARImageNoiseTexture : NSObject

{
    float _minSNR;
    float _maxSNR;
    float _nSteps;
    NSObject<OS_dispatch_queue> *_queue;
    float _lastSNR;
    id <MTLTexture> _texture;
}

@property (nonatomic, readonly) id <MTLTexture> texture;

+ (id)sharedInstanceForCameraPosition:(long long)arg1 longEdgeImageResolution:(unsigned int)arg2;

- (float)snrToNoiseIntensity:(float)arg1;
- (id)initWithNoiseModel:(int)arg1;

@end
