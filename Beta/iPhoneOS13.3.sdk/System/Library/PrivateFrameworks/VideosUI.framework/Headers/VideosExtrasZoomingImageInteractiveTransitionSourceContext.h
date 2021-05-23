/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomingImageInteractiveTransitionSourceContext : NSObject

{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    unsigned long long _itemIndex;
    unsigned long long _supportedZoomingImageTransitionDirections;
    NSString *_identifier;
}

@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic) unsigned long long supportedZoomingImageTransitionDirections;
@property (copy, nonatomic) NSString *identifier;

@end
