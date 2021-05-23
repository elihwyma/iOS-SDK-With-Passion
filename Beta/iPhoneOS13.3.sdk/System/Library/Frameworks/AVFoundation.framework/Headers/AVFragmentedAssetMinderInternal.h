/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFragmentedAssetMinderInternal : NSObject

{
    NSMutableSet *assets;
    NSObject<OS_dispatch_queue> *accessSerializer;
    double mindingInterval;
}

@end
