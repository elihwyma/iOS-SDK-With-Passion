/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXInitialHysteresisNumberFilter : QLPXNumberFilter

{
    _Bool _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property (nonatomic) double hysteresis;
@property (nonatomic, readonly) double outputDerivative;

- (double)updatedOutput;

@end
