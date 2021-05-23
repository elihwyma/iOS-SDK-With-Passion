/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKActionPan.h>

@interface OKActionEdgePan : OKActionPan

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)edgePanActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(struct CGPoint)arg4 previousTranslation:(struct CGPoint)arg5 velocity:(struct CGPoint)arg6 previousVelocity:(struct CGPoint)arg7 direction:(unsigned long long)arg8 context:(id)arg9;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
