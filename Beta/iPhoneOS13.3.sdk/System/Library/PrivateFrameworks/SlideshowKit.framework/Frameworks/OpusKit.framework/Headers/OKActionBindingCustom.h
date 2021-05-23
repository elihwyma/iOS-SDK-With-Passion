/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingCustom : OKActionBinding

{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;

@end
