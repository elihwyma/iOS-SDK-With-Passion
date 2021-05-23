/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration

{
    struct CGSize _thumbnailSize;
    NSArray *_filters;
}

@property (nonatomic) struct CGSize thumbnailSize;
@property (copy, nonatomic) NSArray *filters;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
