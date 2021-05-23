/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXViewport, UIView;

@protocol SXGradientFactory;

@interface SXDocumentStyleRenderer : NSObject

{
    SXViewport *_viewport;
    id <SXGradientFactory> _gradientFactory;
    UIView *_topBackgroundView;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) id <SXGradientFactory> gradientFactory;
@property (retain, nonatomic) UIView *topBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (void)layoutTopBackgroundView;
- (id)initWithViewport:(id)arg1 gradientFactory:(id)arg2;

@end
