/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <NSObject.h>

@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject

{
    _Bool _active;
    double _compactHeight;
    double _expandedHeight;
    UIViewFloatAnimatableProperty *_resizeProgress;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) double compactHeight;
@property (nonatomic) double expandedHeight;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *resizeProgress;

@end
