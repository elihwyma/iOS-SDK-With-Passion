/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

{
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
    int _sourceSubType;
}

@property (retain, nonatomic) struct opaqueCMFormatDescription *formatDescription;
@property (retain, nonatomic) struct OpaqueCMClock *clock;
@property (nonatomic) int sourceSubType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
