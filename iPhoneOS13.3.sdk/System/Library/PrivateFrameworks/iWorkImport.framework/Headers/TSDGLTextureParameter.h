//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLTextureParameter : NSObject
{
    unsigned int _pname;
    NSUInteger _paramCount;
    int _intData;
    float _floatData;
    unsigned int _target;
}

+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameters:(float )arg2 count:(NSUInteger)arg3 target:(unsigned int)arg4;
+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameters:(float )arg2 count:(NSUInteger)arg3;
+ (id)textureParameterWithPName:(unsigned int)arg1 floatParameter:(float)arg2;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameters:(int )arg2 count:(NSUInteger)arg3 target:(unsigned int)arg4;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameters:(int )arg2 count:(NSUInteger)arg3;
+ (id)textureParameterWithPName:(unsigned int)arg1 integerParameter:(int)arg2;
+ (id)stringWithCurrentTextureParameters;
- (void)setGLTextureParameter;
- (void)dealloc;
- (id)initWithPName:(unsigned int)arg1 paramCount:(NSUInteger)arg2 intData:(int )arg3 floatData:(float )arg4 target:(unsigned int)arg5;

@end

