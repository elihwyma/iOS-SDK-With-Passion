/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARParentTechnique.h>

@interface ARPersonOcclusionParentTechnique : ARParentTechnique

{
    _Bool _shouldSkipFramesWhenBusy;
}

- (id)processData:(id)arg1;
- (id)initWithTechniques:(id)arg1 delegate:(id)arg2;

@end
