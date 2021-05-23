/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface _AFAudioPowerXPCSharedMemory : NSObject

{
    unsigned long long _mappedLength;
    void *_sharedRegion;
}

@property (nonatomic, readonly) float averagePower;
@property (nonatomic, readonly) float peakPower;

- (void)dealloc;
- (id)initWithXPCObject:(id)arg1;
- (void)_destroyMapping;

@end
