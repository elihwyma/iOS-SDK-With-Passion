/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTexGen : GLKEffectProperty

{
    int _mode;
    float *_plane;
    int _coord;
    int _modeLoc;
    int _planeLoc;
    int _eyePlaneByInvModelviewLoc;
    unsigned int _textureIndex;
    float *_eyePlaneByInvModelview;
    char *_modeNameString;
    char *_planeNameString;
}

@property (nonatomic) float *eyePlaneByInvModelview;
@property (nonatomic) int modeLoc;
@property (nonatomic) int planeLoc;
@property (nonatomic) int eyePlaneByInvModelviewLoc;
@property (nonatomic) char *modeNameString;
@property (nonatomic) char *planeNameString;
@property (nonatomic) unsigned int textureIndex;
@property (nonatomic) int mode;
@property (nonatomic, readonly) int coord;
@property (nonatomic) float *plane;

- (id)init;
- (void)dealloc;
- (void)bind;
- (void)dirtyAllUniforms;
- (void)initializeMasks;
- (void)setShaderBindings;
- (id)initWithMode:(int)arg1 coord:(int)arg2;

@end
