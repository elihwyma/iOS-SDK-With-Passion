/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBindingTap.h>

@class NSString;

@interface OKActionBindingFocusTap : OKActionBindingTap

{
    unsigned long long _mode;
    _Bool _focusInEnabled;
    _Bool _focusOutEnabled;
}

@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool focusInEnabled;
@property (nonatomic) _Bool focusOutEnabled;
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
- (_Bool)performAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;

@end
