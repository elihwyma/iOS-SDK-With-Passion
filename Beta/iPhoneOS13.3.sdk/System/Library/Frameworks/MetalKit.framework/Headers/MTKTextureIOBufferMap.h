/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTKTextureIOBufferMap : NSObject

{
    void *_bytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *bytes;

- (id)initWithContents:(void *)arg1;

@end
