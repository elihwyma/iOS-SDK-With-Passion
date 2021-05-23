/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIShadowView.h>

__attribute__((visibility("hidden")))
@interface _UILeadingEdgeShadowView : _UIShadowView

{
    double _width;
}

@property (nonatomic, readonly) double width;

- (id)initWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)_loadImageIfNecessary;

@end
