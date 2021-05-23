/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBindingPan.h>

@class NSString, UIAttachmentBehavior;

@interface OKActionBindingDynamicPan : OKActionBindingPan

{
    double _length;
    double _damping;
    double _frequency;
    UIAttachmentBehavior *_draggingBehavior;
}

@property (nonatomic) double length;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
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
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePan:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)performActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(struct CGPoint)arg4 velocity:(struct CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7;

@end
