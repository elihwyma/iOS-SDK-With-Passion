/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <UIKit/UIView.h>

@class AEGridOverlayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface AEGridOverlayView : UIView

{
    AEGridOverlayConfiguration *_overlayConfiguration;
}

@property (retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (id)loopBadge;
+ (id)videoBadge;
+ (id)cloudBadge;
+ (id)gradientShadow;
+ (id)gridOverlayLayoutInfo;

- (id)init;
- (void)prepareForReuse;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (struct CGRect)_cloudRect;
- (struct CGRect)_videoRect;
- (struct CGRect)_loopRect;

@end
