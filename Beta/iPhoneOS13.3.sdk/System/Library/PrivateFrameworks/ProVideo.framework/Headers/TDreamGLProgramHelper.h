/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TDreamGLProgramHelper : NSObject

{
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
    _Bool _initialized;
}

@property (nonatomic) _Bool initialized;

- (void)dealloc;
- (void)use;
- (_Bool)link;
- (void)addAttribute:(id)arg1;
- (unsigned int)uniformIndex:(id)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (id)logForOpenGLObject:(unsigned int)arg1 infoCallback:(CDUnknownFunctionPointerType)arg2 logFunc:(CDUnknownFunctionPointerType)arg3;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (unsigned int)attributeIndex:(id)arg1;
- (id)vertexShaderLog;
- (id)fragmentShaderLog;
- (id)programLog;

@end
