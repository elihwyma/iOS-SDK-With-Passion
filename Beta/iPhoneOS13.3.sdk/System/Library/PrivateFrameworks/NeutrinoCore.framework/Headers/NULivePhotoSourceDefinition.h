/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceDefinition.h>

@interface NULivePhotoSourceDefinition : NUSourceDefinition

{
    NUSourceDefinition *_image;
    NUSourceDefinition *_video;
}

@property (readonly) NUSourceDefinition *image;
@property (readonly) NUSourceDefinition *video;

- (id)init;
- (id)description;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2;

@end
