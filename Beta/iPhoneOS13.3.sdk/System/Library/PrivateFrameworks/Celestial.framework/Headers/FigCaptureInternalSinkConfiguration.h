/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureInternalSinkConfiguration : FigCaptureSinkConfiguration

{
    int _subType;
}

@property (nonatomic, readonly) int subType;

- (int)sinkType;
- (id)initWithSinkSubType:(int)arg1;

@end
