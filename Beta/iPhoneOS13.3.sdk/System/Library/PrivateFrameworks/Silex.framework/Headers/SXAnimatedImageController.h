/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentView, SXImageView, SXViewport;

@interface SXAnimatedImageController : NSObject

{
    _Bool _isReceivingViewportChanges;
    SXViewport *_viewport;
    SXImageView *_imageView;
    double _previousYOffset;
    SXComponentView *_componentView;
}

@property (weak, nonatomic) SXViewport *viewport;
@property (retain, nonatomic) SXImageView *imageView;
@property (nonatomic) double previousYOffset;
@property (weak, nonatomic) SXComponentView *componentView;
@property (nonatomic) _Bool isReceivingViewportChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (id)initWithImageComponentView:(id)arg1 viewport:(id)arg2 imageView:(id)arg3;
- (void)registerForViewportChanges;
- (void)unregisterForViewportChanges;

@end
