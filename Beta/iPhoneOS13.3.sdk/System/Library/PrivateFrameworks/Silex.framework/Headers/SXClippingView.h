/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class SXClippingLayer;

@interface SXClippingView : UIView

{
    UIView *_contentView;
    unsigned long long _clippingMode;
    struct CGSize _contentSize;
    struct CGRect _contentFrame;
}

@property (nonatomic, readonly) SXClippingLayer *layer;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) unsigned long long clippingMode;

+ (Class)layerClass;

- (id)initWithContentView:(id)arg1;

@end
