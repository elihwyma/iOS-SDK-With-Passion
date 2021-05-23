/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

{
    _Bool _quadraHighResCaptureEnabled;
}

@property (nonatomic) _Bool quadraHighResCaptureEnabled;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
