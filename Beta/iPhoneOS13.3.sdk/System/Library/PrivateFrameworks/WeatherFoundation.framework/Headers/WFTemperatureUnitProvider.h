/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface WFTemperatureUnitProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_providerQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue;
@property (readonly) int userTemperatureUnit;

- (id)init;
- (void)fetchTemperatureUnitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)replaceUnit:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)_providerQueue_readUnit;
- (int)_providerQueue_changeUnit:(int)arg1;
- (void)_postDidChangeUnitDefaultsPreference;
- (void)replaceUnit:(int)arg1;

@end
