/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUImageStackItemView.h>

@class MPUBorderConfiguration, MPUBorderDrawingCache, UIImageView;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView

{
    UIImageView *_borderImageView;
    MPUBorderConfiguration *_borderConfiguration;
    MPUBorderDrawingCache *_borderDrawingCache;
}

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration;
@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateBorderImageView;
- (void)_borderDrawingCacheWasInvalidated:(id)arg1;

@end
