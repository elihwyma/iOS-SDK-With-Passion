/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSString, UISwipeGestureRecognizer;

@interface OKActionBindingSwipe : OKActionBinding

{
    unsigned long long _numberOfTouchesRequired;
    unsigned long long _direction;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) unsigned long long direction;
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
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (void)handleSwipe:(id)arg1;

@end
