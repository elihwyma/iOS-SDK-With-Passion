/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface MTLSharedTextureHandle : NSObject

{
    struct MTLSharedTextureHandlePrivate *_priv;
}

@property (readonly) id <MTLDevice> device;
@property (readonly) NSString *label;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (struct __IOSurface *)ioSurface;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 label:(id)arg2;
- (unsigned int)createMachPort;

@end
