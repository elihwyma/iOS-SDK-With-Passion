/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMetalLayer;

@protocol CAMMetalViewDelegate;

@interface CAMMetalView : UIView

{
    id <CAMMetalViewDelegate> _metalViewDelegate;
}

@property (retain, nonatomic) id <CAMMetalViewDelegate> metalViewDelegate;
@property (nonatomic, readonly) CAMetalLayer *metalLayer;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
