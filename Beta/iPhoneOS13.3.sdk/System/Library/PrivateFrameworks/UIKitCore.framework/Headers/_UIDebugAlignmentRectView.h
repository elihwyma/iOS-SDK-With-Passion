/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIDebugAlignmentRectView : UIView

{
    double _baselineOffset;
}

- (void)doesNotRecognizeSelector:(SEL)arg1;
- (_Bool)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 baselineOffset:(double)arg2;
- (id)_alignmentDebuggingOverlayCreateIfNecessary:(_Bool)arg1;

@end
