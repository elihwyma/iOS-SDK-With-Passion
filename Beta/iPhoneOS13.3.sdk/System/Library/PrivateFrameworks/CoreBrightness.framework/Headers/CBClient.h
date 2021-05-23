/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemClient, CBAdaptationClient, CBBlueLightClient;

@interface CBClient : NSObject

{
    BrightnessSystemClient *bsc;
    CBBlueLightClient *_blueLightClient;
    CBAdaptationClient *_adaptationClient;
}

@property (readonly) CBBlueLightClient *blueLightClient;
@property (readonly) CBAdaptationClient *adaptationClient;

+ (_Bool)supportsAdaptation;
+ (_Bool)supportsBlueLightReduction;

- (id)init;
- (void)dealloc;

@end
