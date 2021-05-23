/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition

{
    CIImage *_image;
    long long _orientation;
}

@property (readonly) CIImage *image;
@property (readonly) long long orientation;

- (id)init;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)initWithCIImage:(id)arg1 orientation:(long long)arg2;

@end
