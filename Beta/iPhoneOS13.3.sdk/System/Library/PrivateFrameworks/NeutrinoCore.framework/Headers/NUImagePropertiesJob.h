/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@protocol NUImageProperties;

@interface NUImagePropertiesJob : NURenderJob

{
    id <NUImageProperties> _imageProperties;
}

- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsRenderStage;
- (_Bool)wantsCompleteStage;

@end
