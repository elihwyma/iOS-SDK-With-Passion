/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSString, UILongPressGestureRecognizer;

@interface OKActionBindingLongPress : OKActionBinding

{
    unsigned long long _numberOfTapsRequired;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;

@end
