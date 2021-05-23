/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition

{
    struct CGImageSource *_imageSource;
}

@property (readonly) struct CGImageSource *imageSource;

- (id)init;
- (void)dealloc;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1;

@end
