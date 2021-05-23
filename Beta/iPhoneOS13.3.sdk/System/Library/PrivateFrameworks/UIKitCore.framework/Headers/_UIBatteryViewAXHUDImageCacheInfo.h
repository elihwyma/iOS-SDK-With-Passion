/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject

{
    _Bool _showBolt;
    _Bool _reverseLayoutDirection;
    UIImage *_cachedImage;
    UIColor *_fillColor;
    UIColor *_tintColor;
    double _capacity;
    double _scale;
}

@property (retain, nonatomic) UIImage *cachedImage;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double capacity;
@property (nonatomic) _Bool showBolt;
@property (nonatomic) _Bool reverseLayoutDirection;
@property (nonatomic) double scale;

- (_Bool)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 tintColor:(id)arg3 showingBolt:(_Bool)arg4 reverseLayout:(_Bool)arg5 scale:(double)arg6;

@end
