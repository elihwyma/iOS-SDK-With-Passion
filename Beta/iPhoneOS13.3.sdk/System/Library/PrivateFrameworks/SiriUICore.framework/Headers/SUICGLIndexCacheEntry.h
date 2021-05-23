/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@interface SUICGLIndexCacheEntry : NSObject

{
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int *_gl_indices;
}

@property (nonatomic) unsigned int numAuraIndices;
@property (nonatomic) unsigned int numAuraIndicesCulled;
@property (nonatomic) unsigned int numWaveIndices;
@property (nonatomic) unsigned int *gl_indices;

- (void)dealloc;

@end
