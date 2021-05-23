/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@interface NUGeometryJob : NURenderJob

- (id)result;
- (_Bool)wantsRenderStage;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (id)scalePolicy;
- (id)geometryRequest;

@end
