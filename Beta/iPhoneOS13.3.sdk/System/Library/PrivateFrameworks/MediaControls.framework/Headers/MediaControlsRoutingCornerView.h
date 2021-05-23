/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <ControlCenterUIKit/CCUICAPackageView.h>

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingCornerView : CCUICAPackageView

{
    _Bool _routesAvailable;
    _Bool _routing;
    long long _deviceType;
}

@property (nonatomic) long long deviceType;
@property (nonatomic, getter=routesAreAvailable) _Bool routesAvailable;
@property (nonatomic, getter=isRouting) _Bool routing;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateGlyph;

@end
