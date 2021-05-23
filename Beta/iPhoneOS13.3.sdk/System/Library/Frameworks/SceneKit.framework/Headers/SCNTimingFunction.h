/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@interface SCNTimingFunction : NSObject

{
    struct __C3DTimingFunction *_timingFunction;
}

+ (_Bool)supportsSecureCoding;
+ (id)functionWithTimingMode:(long long)arg1;
+ (id)functionWithCAMediaTimingFunction:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction *)arg1;
- (struct __C3DTimingFunction *)c3dTimingFunction;

@end
