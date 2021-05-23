/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BKUIPearlCrossHairsManager : NSObject

{
    struct vector<InstanceInfo, std::__1::allocator<InstanceInfo>> _instanceVector;
    NSMutableArray *_springInstances;
}

@property (readonly) NSMutableArray *springInstances;
@property (readonly) struct InstanceInfo *instanceData;
@property (nonatomic) _Bool grayscale;

- (id)init;
- (void)setTarget: /* Error: Ran out of types for this method. */;
- (void)setValue: /* Error: Ran out of types for this method. */;
- (id).cxx_construct;
- (void)update:(double)arg1;
- (void)addInstance:(id)arg1;
- (void)setSpringsStates:(unsigned long long)arg1;

@end
