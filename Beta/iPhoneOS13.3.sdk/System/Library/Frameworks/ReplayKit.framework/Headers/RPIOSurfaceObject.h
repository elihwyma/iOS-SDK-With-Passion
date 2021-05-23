/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@interface RPIOSurfaceObject : NSObject

{
    struct __IOSurface *_ioSurface;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __IOSurface *)ioSurface;
- (void)setIOSurface:(struct __IOSurface *)arg1;

@end
