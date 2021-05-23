/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary;

@interface BWStillImageProcessorCoordinator : NSObject

{
    NSDictionary *_processorControllersByType;
}

- (void)dealloc;
- (id)controllerForType:(unsigned long long)arg1;
- (id)initWithProcessorControllers:(id)arg1;
- (id)processorControllerNames;

@end
