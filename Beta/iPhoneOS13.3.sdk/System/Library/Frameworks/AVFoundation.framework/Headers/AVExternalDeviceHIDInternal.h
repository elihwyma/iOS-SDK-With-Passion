/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVExternalDeviceHIDInternal : NSObject

{
    AVWeakReference *weakReferenceToExternalDevice;
    NSString *UUID;
    NSString *screenID;
    NSNumber *inputMode;
}

@end
