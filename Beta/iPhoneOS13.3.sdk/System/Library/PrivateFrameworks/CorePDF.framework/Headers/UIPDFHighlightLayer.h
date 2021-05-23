/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface UIPDFHighlightLayer : CALayer

{
    struct CGPath *_clipPath;
    struct CGPath *_borderPath;
    struct CGPoint offset;
}

@property (nonatomic) struct CGPath *clipPath;
@property (nonatomic) struct CGPath *borderPath;
@property (nonatomic) struct CGPoint offset;

- (void)dealloc;

@end
