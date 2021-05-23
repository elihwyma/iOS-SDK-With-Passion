/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration

{
    _Bool _discardsLateDepthData;
    _Bool _filteringEnabled;
}

@property (nonatomic) _Bool discardsLateDepthData;
@property (nonatomic) _Bool filteringEnabled;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
