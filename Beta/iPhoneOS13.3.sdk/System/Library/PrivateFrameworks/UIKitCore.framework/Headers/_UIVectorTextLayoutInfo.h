/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIVectorTextLayoutParameters;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutInfo : NSObject

{
    _UIVectorTextLayoutParameters *_parameters;
    struct __CTFrame *_frame;
    struct CGAffineTransform _coordinateAdjustment;
}

@property (retain, nonatomic) _UIVectorTextLayoutParameters *parameters;
@property (nonatomic) struct CGAffineTransform coordinateAdjustment;
@property (nonatomic) struct __CTFrame *frame;

- (void)dealloc;
- (double)scale;

@end
