/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFXPCWrapper, NSString, _AFAudioPowerXPCSharedMemory;

@interface AFAudioPowerXPCProvider : NSObject

{
    AFXPCWrapper *_wrapper;
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCWrapper:(id)arg1;
- (void)willBeginAccessPower;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)didEndAccessPower;

@end
