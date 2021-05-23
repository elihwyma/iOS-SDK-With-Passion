/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NUGLTexture;

@interface NUGLSampler : NSObject

{
    unsigned int _wrapMode;
    unsigned int _minificationFilter;
    unsigned int _magnificationFilter;
    NUGLTexture *_texture;
}

@property (nonatomic, readonly) NUGLTexture *texture;
@property (nonatomic) unsigned int wrapMode;
@property (nonatomic) unsigned int minificationFilter;
@property (nonatomic) unsigned int magnificationFilter;

- (id)init;
- (id)description;
- (id)initWithTexture:(id)arg1;

@end
