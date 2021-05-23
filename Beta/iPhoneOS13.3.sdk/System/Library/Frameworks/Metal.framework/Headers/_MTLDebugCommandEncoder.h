/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLCommandEncoder.h>

@class NSString;

@protocol MTLDevice;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintf:(id)arg1;
- (void)IOLog:(id)arg1;

@end
