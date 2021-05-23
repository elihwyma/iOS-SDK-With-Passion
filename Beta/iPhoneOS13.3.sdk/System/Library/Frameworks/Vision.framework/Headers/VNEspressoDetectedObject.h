/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEspressoDetectedObject : NSObject

{
    struct CGRect _bounds;
    float _confidence;
    long long _objectType;
}

@property long long objectType;
@property struct CGRect bounds;
@property (readonly) struct CGPoint center;
@property float confidence;

- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3;

@end
