/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TSDGLFrameBufferTextureConfig : NSObject

{
    int _GLInternalFormat;
    unsigned int _GLFormat;
    unsigned int _GLType;
    unsigned int _attachment;
    NSString *_name;
    NSArray *_textureParameters;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) int GLInternalFormat;
@property (nonatomic, readonly) unsigned int GLFormat;
@property (nonatomic, readonly) unsigned int GLType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned int attachment;
@property (retain, nonatomic) NSArray *textureParameters;

+ (id)textureConfigWithSize:(struct CGSize)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 name:(id)arg6;
+ (id)textureConfigWithSize:(struct CGSize)arg1 name:(id)arg2;

- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 name:(id)arg6;

@end
