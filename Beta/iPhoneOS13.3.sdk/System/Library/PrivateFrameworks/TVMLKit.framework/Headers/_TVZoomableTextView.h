/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVFocusableTextView.h>

@class IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVZoomableTextView : TVFocusableTextView

{
    double _maxHeight;
    double _maxWidth;
    IKViewElement *_viewElement;
    struct CGSize _cachedSizeThatFits;
    struct CGSize _previousTargetSize;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic) struct CGSize cachedSizeThatFits;
@property (nonatomic) struct CGSize previousTargetSize;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_clearCachedValues;
- (void)updateWithViewElement:(id)arg1;

@end
