/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry

{
    NSString *_filterType;
    UIColor *_color;
    UIImage *_image;
    double _alpha;
}

@property (copy, nonatomic) NSString *filterType;
@property (copy, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double alpha;

+ (id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3;
+ (id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3;

- (id)description;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)addEffectToView:(id)arg1;

@end
