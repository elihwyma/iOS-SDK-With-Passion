/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLDevice;

@interface ARSharedGPUDevice : NSObject

{
    id <MTLDevice> _device;
}

@property (retain, nonatomic) id <MTLDevice> device;

+ (id)sharedInstance;

@end
