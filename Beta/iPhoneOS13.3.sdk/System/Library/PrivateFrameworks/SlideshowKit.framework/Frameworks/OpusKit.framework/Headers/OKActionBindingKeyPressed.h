/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding

{
    NSString *_keyPressed;
    _Bool _isKeyUp;
}

@property (retain, nonatomic) NSString *keyPressed;
@property (nonatomic) _Bool isKeyUp;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettings:(id)arg1;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)setSettingKeyPressed:(id)arg1;
- (void)setSettingIsKeyUp:(_Bool)arg1;

@end
