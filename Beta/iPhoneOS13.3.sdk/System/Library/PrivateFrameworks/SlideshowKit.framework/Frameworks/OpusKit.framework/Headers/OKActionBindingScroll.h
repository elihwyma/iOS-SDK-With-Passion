/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingScroll : OKActionBinding

{
    unsigned long long _triggerLimit;
    unsigned long long _probability;
    struct CGPoint _offset;
    _Bool _continuous;
}

@property (nonatomic) struct CGPoint offset;

+ (id)supportedSettings;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;

@end
