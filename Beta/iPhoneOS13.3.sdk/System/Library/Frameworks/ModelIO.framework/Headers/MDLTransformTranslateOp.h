/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLAnimatedVector3, NSString;

@interface MDLTransformTranslateOp : NSObject

{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedVector3 *_animatedValue;
}

@property (nonatomic) _Bool inverse;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MDLAnimatedVector3 *animatedValue;

- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 data:(id)arg3;

@end
