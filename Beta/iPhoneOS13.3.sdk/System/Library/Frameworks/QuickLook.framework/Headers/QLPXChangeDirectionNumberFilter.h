/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter

{
    double _threshold;
    double _minimumChange;
}

@property (nonatomic) double minimumChange;

- (id)initWithInput:(double)arg1;
- (double)updatedOutput;
- (double)initialOutputForInput:(double)arg1;

@end
