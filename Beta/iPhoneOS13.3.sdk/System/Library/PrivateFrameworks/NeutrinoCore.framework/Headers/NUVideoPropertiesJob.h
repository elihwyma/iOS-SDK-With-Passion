/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob

{
    id <NUVideoProperties> _videoProperties;
}

- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsRenderStage;
- (_Bool)wantsCompleteStage;

@end
