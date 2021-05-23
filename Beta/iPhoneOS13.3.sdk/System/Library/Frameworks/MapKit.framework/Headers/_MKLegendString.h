/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKLegendString : CALayer

{
    struct __CTLine *_line;
    double _baselineDistanceFromBottom;
    NSAttributedString *_string;
}

@property (retain, nonatomic) NSAttributedString *string;
@property (nonatomic, readonly) double baselineDistanceFromBottom;

- (id)init;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;

@end
