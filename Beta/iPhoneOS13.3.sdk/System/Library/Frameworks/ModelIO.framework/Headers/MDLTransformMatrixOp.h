/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLAnimatedMatrix4x4, NSString;

@interface MDLTransformMatrixOp : NSObject

{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedMatrix4x4 *_animatedValue;
}

@property (nonatomic) _Bool inverse;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MDLAnimatedMatrix4x4 *animatedValue;

- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 data:(id)arg3;

@end
