/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKPageController;

@interface AKAlignmentGuideController : NSObject

{
    struct CGPoint _initialDraggedAnnotationsCombinedCenter;
    struct CGPoint *_otherAnnotationCenters;
    unsigned long long _otherAnnotationCentersCount;
    _Bool _exifHasFlippedAxes;
    AKPageController *_pageController;
    double _screenToModelScaleFactor;
}

@property (weak) AKPageController *pageController;
@property _Bool exifHasFlippedAxes;
@property double screenToModelScaleFactor;

- (void)dealloc;
- (id)initWithPageController:(id)arg1;
- (struct CGPoint)guideAlignedPointForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;

@end
