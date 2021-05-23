/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLBuffer;

@interface MTKTextureIOBuffer : NSObject

{
    id <MTLBuffer> _buffer;
}

@property (nonatomic, readonly) id <MTLBuffer> buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (id)initWithLength:(unsigned long long)arg1 device:(id)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(CDUnknownBlockType)arg3 device:(id)arg4 error:(id *)arg5;

@end
