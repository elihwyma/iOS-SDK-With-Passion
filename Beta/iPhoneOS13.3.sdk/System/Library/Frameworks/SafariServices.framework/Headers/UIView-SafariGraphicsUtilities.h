/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@interface UIView (SafariGraphicsUtilities)

@property (nonatomic, readonly) _Bool _sf_isFullScreenWidth;
@property (nonatomic, readonly) _Bool _sf_isFullScreenHeight;
@property (nonatomic, readonly) _Bool _sf_usesLeftToRightLayout;
@property (nonatomic, readonly) _Bool _sf_hasLandscapeAspectRatio;
@property (nonatomic, readonly) struct UIEdgeInsets _sf_safeAreaInsetsFlippedForLayoutDirectionality;
@property (nonatomic, readonly) struct CGRect _sf_safeAreaBounds;
@property (nonatomic, readonly) struct CGRect _sf_bottomUnsafeAreaFrame;
@property (nonatomic, readonly) struct CGRect _sf_bottomUnsafeAreaFrameForToolbar;

+ (void)_sf_cancelLinkAnimationsOnWindow:(id)arg1;
+ (void)_sf_animateLinkImage:(id)arg1 withAnimation:(long long)arg2 fromPoint:(struct CGPoint)arg3 inView:(id)arg4 toRect:(struct CGRect)arg5 inView:(id)arg6 afterImageDisappearsBlock:(CDUnknownBlockType)arg7 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg8;
+ (void)_sf_animateLinkImage:(struct CGImage *)arg1 withAnimation:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4 toRect:(struct CGRect)arg5 inView:(id)arg6 afterImageDisappearsBlock:(CDUnknownBlockType)arg7 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg8;
+ (void)sf_animate:(_Bool)arg1 usingDefaultTimingWithOptions:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_sf_performLinkAnimation:(long long)arg1 onView:(id)arg2;

- (void)ss_setUntransformedFrame:(struct CGRect)arg1;
- (struct CGRect)ss_untransformedFrame;
- (id)_sf_firstAncestorViewOfClass:(Class)arg1;
- (double)_sf_convertY:(double)arg1 toCoordinateSpace:(id)arg2;
- (id)_sf_snapshotImageFromIOSurface;
- (void)_sf_setOrderedSubviews:(id *)arg1 count:(unsigned long long)arg2;

@end
