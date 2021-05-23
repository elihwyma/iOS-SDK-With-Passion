/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CASlotProxy : NSObject

{
    struct Proxy *_proxy;
}

- (void)dealloc;
- (id)initWithName:(unsigned int)arg1;
- (struct Object *)CA_copyRenderValue;

@end
