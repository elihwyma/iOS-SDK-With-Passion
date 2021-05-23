/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class CALayer, SXSolidBorderView;

@interface SXLineComponentView : SXComponentView

{
    CALayer *_strokeLayer;
    SXSolidBorderView *_borderView;
}

@property (retain, nonatomic) CALayer *strokeLayer;
@property (retain, nonatomic) SXSolidBorderView *borderView;

- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (void)loadComponent:(id)arg1;
- (_Bool)userInteractable;

@end
