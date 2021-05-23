/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNMetalContext : NSObject

{
    _Bool _useGPU;
    id <MTLDevice> _metalDevice;
    NSDictionary *_wisdomParams;
}

@property (readonly) id <MTLDevice> metalDevice;
@property (readonly) NSDictionary *wisdomParams;
@property (readonly) _Bool useGPU;

- (id)initWithMetalDevice:(id)arg1;

@end
