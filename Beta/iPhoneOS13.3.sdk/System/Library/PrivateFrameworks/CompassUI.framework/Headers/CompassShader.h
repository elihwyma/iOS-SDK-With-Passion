/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface CompassShader : NSObject

{
    NSMutableDictionary *_uniforms;
    NSArray *_uniformNames;
    NSString *_fragmentName;
    NSString *_vertexName;
    unsigned int _program;
}

@property (nonatomic) unsigned int program;

- (void)dealloc;
- (void)use;
- (int)locationForUniform:(id)arg1;
- (id)initWithFragmentName:(id)arg1 vertexName:(id)arg2 uniformNames:(id)arg3;
- (_Bool)loadShader;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 file:(id)arg3;
- (_Bool)linkProgram:(unsigned int)arg1;
- (id)initWithName:(id)arg1 uniformNames:(id)arg2;
- (_Bool)validateProgram:(unsigned int)arg1;

@end
