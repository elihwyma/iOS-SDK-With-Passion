/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderNode.h>

@interface PIAutoLoopFrameNode : NURenderNode

- (CDStruct_912cb5d2)videoScale;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_processImage:(id)arg1 cleanRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 transform:(id)arg4 geometry:(id)arg5;

@end
