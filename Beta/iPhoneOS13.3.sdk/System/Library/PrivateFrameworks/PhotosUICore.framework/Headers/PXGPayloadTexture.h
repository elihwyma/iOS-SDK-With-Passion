/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGBaseTexture.h>

@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture

{
    int _presentationType;
    id <NSCopying> _payload;
}

@property (copy, nonatomic, readonly) id <NSCopying> payload;
@property (nonatomic, readonly) int presentationType;

- (id)init;
- (_Bool)isOpaque;
- (struct CGImage *)imageRepresentation;
- (struct CGSize)pixelSize;
- (long long)estimatedByteSize;
- (id)initWithPayload:(id)arg1 presentationType:(int)arg2;

@end
