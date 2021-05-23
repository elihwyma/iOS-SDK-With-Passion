/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration

{
    _Bool _discardsLateVideoFrames;
    _Bool _derivedFromPreview;
}

@property (nonatomic) _Bool discardsLateVideoFrames;
@property (nonatomic) _Bool derivedFromPreview;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
