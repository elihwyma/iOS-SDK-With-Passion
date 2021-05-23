/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GlobeLineContainerDelegate : NSObject

{
    struct RealisticRenderer *_renderer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)lineContainerNeedsDisplay:(id)arg1;
- (id)initWithRenderer:(struct RealisticRenderer *)arg1;

@end
