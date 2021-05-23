/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKLabelNavTrafficFeature.h>

@class VKTrafficSignalFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavTrafficSignal : VKLabelNavTrafficFeature

{
    VKTrafficSignalFeature *_trafficSignal;
}

@property (nonatomic, readonly) VKTrafficSignalFeature *trafficSignal;

- (void)dealloc;
- (shared_ptr_ed5e0db7)createIcon:(struct NavContext *)arg1;
- (id)initWithTrafficSignal:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 *)arg2 nextMercatorPoint:(const Mercator2_57ec32b6 *)arg3;

@end
