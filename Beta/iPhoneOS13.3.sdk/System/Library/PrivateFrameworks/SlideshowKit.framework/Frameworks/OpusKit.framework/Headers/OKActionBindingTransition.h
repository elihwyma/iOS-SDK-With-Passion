/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingTransition : OKActionBinding

+ (id)supportedSettings;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (id)_compatibleNavigatorViewController:(id)arg1;

@end
