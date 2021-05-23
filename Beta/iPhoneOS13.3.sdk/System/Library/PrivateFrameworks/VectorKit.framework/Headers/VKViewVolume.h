/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKViewVolume : NSObject

{
    Matrix_6e1d3589 _corners[8];
}

@property (nonatomic, readonly) const Matrix_6e1d3589 *corners;

- (id).cxx_construct;
- (void)updateWithFrustum:(CDStruct_7a7719de)arg1 matrix:(const Matrix_08d701e4 *)arg2;
- (Matrix_6e1d3589)lerpPoint:(float *)arg1;

@end
