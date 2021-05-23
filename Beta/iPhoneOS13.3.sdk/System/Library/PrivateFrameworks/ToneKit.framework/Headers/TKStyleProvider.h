/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString, UIColor, UIFont, UIImage, UIScreen;

@interface TKStyleProvider : NSObject

{
    NSBundle *_bundle;
    NSMutableDictionary *_cachedStyleProperties;
    UIScreen *_screen;
}

@property (nonatomic, readonly) double defaultAnimationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *vibrationRecorderBarsBackgroundColor;
@property (retain, nonatomic) UIScreen *screen;
@property (nonatomic, readonly) UIFont *vibrationRecorderInstructionsLabelFont;
@property (nonatomic, readonly) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property (nonatomic, readonly) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property (nonatomic, readonly) struct UIOffset vibrationRecorderInstructionsLabelPositionOffset;
@property (nonatomic, readonly) struct UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets;
@property (nonatomic, readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarVerticalOffset;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property (nonatomic, readonly) double vibrationRecorderProgressToolbarVerticalOffset;
@property (nonatomic, readonly) double vibrationRecorderProgressToolbarAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property (nonatomic, readonly) double vibrationRecorderProgressViewHeight;
@property (nonatomic, readonly) UIColor *vibrationRecorderProgressViewTrackColor;
@property (nonatomic, readonly) double vibrationRecorderProgressViewDotHorizontalInset;
@property (nonatomic, readonly) UIColor *vibrationRecorderProgressViewDotTintColor;
@property (nonatomic, readonly) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property (nonatomic, readonly) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property (nonatomic, readonly) UIColor *vibrationRecorderRippleViewBackgroundColor;
@property (nonatomic, readonly) double vibrationRecorderRippleRingLineWidth;
@property (nonatomic, readonly) double vibrationRecorderRippleInitialRadius;
@property (nonatomic, readonly) double vibrationRecorderRippleFinalRadius;
@property (nonatomic, readonly) double vibrationRecorderRippleFingerStillSpeed;
@property (nonatomic, readonly) double vibrationRecorderRippleFingerMovingSpeed;

- (id)init;
- (void)dealloc;
- (id)_bundle;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1;
- (void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(struct UIEdgeInsets)arg2 size:(struct CGSize)arg3 imageRenderingMode:(long long)arg4 withDrawingActions:(CDUnknownBlockType)arg5;
- (id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2;

@end
