/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NUSpace : NSObject

{
    struct NSArray *_transformStack;
}

@property (retain) NSArray *transformStack;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendTransform:(id)arg1;
- (id)initWithTransformStack:(struct NSArray *)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1 toSpace:(id)arg2;
- (struct CGPoint)transformPointForward:(struct CGPoint)arg1;
- (struct CGPoint)transformPointBackward:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1 toSpace:(id)arg2;
- (CDStruct_1b6d18a9)transformTimeBackward:(CDStruct_1b6d18a9)arg1;
- (_Bool)isEqualToSpace:(id)arg1;

@end
